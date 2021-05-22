sudo docker build buildenv -t os
sudo docker run --rm -it -v "$(pwd)":/root/env os


