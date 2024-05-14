FROM ubuntu:20.04

ENV DEBIAN_FRONTEND noninteractive
ENV PATH="${PATH}:/opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin"

COPY KasperskyOS-Community-Edition_1.1.1.40_en.deb /kos/

RUN apt-get update && apt install -y --fix-broken /kos/KasperskyOS-Community-Edition_1.1.1.40_en.deb curl mc && adduser --disabled-password --gecos "" user


CMD ["bash"]
