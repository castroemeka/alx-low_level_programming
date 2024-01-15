#!/bin/bash
wget -P /usr/bin https://github.com/Tolulope05/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/usr/bin/nrandom.so
