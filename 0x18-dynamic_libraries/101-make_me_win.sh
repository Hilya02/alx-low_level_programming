#!/bin/bash
wget -P /tmp -q "https://github.com/hilya02/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libhack.so"
export LD_PRELOAD="/tmp/libmmw.so"
