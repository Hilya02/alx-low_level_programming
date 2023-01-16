#!/bin/bash
wget -P /tmp -q "https://github.com/holbertonschool/0x18.c.git/raw/master/0x18-dynamic_libraries/libmmw.so"
export LD_PRELOAD="/tmp/libmmw.so"
