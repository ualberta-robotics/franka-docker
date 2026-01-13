# Start with an official ROS 2 base image for the desired distribution
FROM osrf/ros:humble-desktop-full


# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive \
    LANG=C.UTF-8 \
    LC_ALL=C.UTF-8 \
    ROS_DISTRO=humble

ARG USER_UID=1003
ARG USER_GID=1003
ARG USERNAME=user
SHELL ["/bin/bash", "-c"] 

# Setup user configuration
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers 

COPY requirements.txt requirements.txt
COPY packages.txt packages.txt
COPY ros_packages.txt ros_packages.txt

# Install essential packages and ROS development tools
RUN apt-get update && apt-get install -y --no-install-recommends \
    $(cat packages.txt) \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update && apt-get install -y --no-install-recommends \
    $(cat ros_packages.txt) \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Pinnochio 
RUN mkdir -p /etc/apt/keyrings
RUN curl http://robotpkg.openrobots.org/packages/debian/robotpkg.asc \
     | tee /etc/apt/keyrings/robotpkg.asc
RUN echo "deb [arch=amd64 signed-by=/etc/apt/keyrings/robotpkg.asc] http://robotpkg.openrobots.org/packages/debian/pub $(lsb_release -cs) robotpkg" \
     | tee /etc/apt/sources.list.d/robotpkg.list
RUN apt update && apt install -qqy robotpkg-py3*-pinocchio
ENV PATH="/opt/openrobots/bin:${PATH}"
ENV PKG_CONFIG_PATH="/opt/openrobots/lib/pkgconfig:${PKG_CONFIG_PATH}"
ENV LD_LIBRARY_PATH="/opt/openrobots/lib:${LD_LIBRARY_PATH}"
ENV PYTHONPATH="/opt/openrobots/lib/python3.10/site-packages:${PYTHONPATH}"
ENV CMAKE_PREFIX_PATH="/opt/openrobots:${CMAKE_PREFIX_PATH}"

# LibFranka
RUN git clone --recurse-submodules https://github.com/frankarobotics/libfranka.git \
    && cd libfranka \
    && git checkout 0.18.2 \
    && git submodule update \
    && mkdir build && cd build \
    && cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=/opt/openrobots/lib/cmake -DBUILD_TESTS=OFF .. \
    && cpack -G DEB \
    && dpkg -i libfranka*.deb

# pylibfranka
RUN cd libfranka && python3 -m pip install .

# Register Intel RealSense public key and repository
RUN mkdir -p /etc/apt/keyrings && \
    curl -sSf https://librealsense.intel.com/Debian/librealsense.pgp | \
        tee /etc/apt/keyrings/librealsense.pgp > /dev/null && \
    echo "deb [signed-by=/etc/apt/keyrings/librealsense.pgp] https://librealsense.intel.com/Debian/apt-repo $(lsb_release -cs) main" | \
        sudo tee /etc/apt/sources.list.d/librealsense.list && \
    sudo apt-get update && \
    sudo apt-get install -y \
        librealsense2-utils \
        librealsense2-dev \
        librealsense2-dbg && \
    sudo apt-get clean && rm -rf /var/lib/apt/lists/*

RUN python3 -m pip install --upgrade pip
RUN python3 -m pip install -r requirements.txt

RUN python3 -m pybind11_stubgen pylibfranka -o /home/$USERNAME/pybind11_stubs/pylibfranka

RUN echo "export PATH=/opt/openrobots/bin:$PATH" >> /home/$USERNAME/.bashrc
RUN echo "export PKG_CONFIG_PATH=/opt/openrobots/lib/pkgconfig:$PKG_CONFIG_PATH" >> /home/$USERNAME/.bashrc
RUN echo "export LD_LIBRARY_PATH=/opt/openrobots/lib:$LD_LIBRARY_PATH" >> /home/$USERNAME/.bashrc
RUN echo "export PYTHONPATH=/opt/openrobots/lib/python3.10/site-packages:$PYTHONPATH" >> /home/$USERNAME/.bashrc
RUN echo "export CMAKE_PREFIX_PATH=/opt/openrobots:$CMAKE_PREFIX_PATH" >> /home/$USERNAME/.bashrc
RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> /home/$USERNAME/.bashrc \
    && echo "source ~/franka-docker/franka_ws/install/setup.bash" >> /home/$USERNAME/.bashrc \
    && echo "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash" >> /home/$USERNAME/.bashrc

USER $USERNAME

# Set workspace under repo folder
# WORKDIR /home/$USERNAME/franka-docker/franka_ws

# # Copy repository content
# COPY . /home/$USERNAME/franka-docker

# # chown stuff and update package info
# RUN sudo chown -R $USERNAME:$USERNAME /home/$USERNAME/franka-docker/franka_ws \
#     && sudo apt-get update \
#     && rosdep update

# # Copy entrypoint
# COPY ./scripts/franka_entrypoint.sh /franka_entrypoint.sh
# RUN sudo chmod +x /franka_entrypoint.sh

# # Set default shell and entrypoint
# SHELL [ "/bin/bash", "-c" ]
# ENTRYPOINT [ "/franka_entrypoint.sh" ]
# CMD [ "/bin/bash" ]

# # Ensure container starts in workspace
# WORKDIR /home/$USERNAME/franka-docker