#!/bin/bash
wget -P /tmp -q "https://github.com/hilya02/alx-low_level_programming/0x18-dynamic_libraries/101-make_me_win.sh"
export LD_PRELOAD="/tmp/101-make_me_win.sh"
