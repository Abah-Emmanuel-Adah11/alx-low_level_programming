#!/bin/bash
wget -p /tmp/https://raw.github.com/Abah-Emmanuel-Adah11/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD =/tmp/nrandom.so