#!/bin/bash
gcc -shared -o /tmp/cheat.so -fPIC -Wall -Werror -Wextra -pedantic -nostartfiles -shared -ldl cheating_rand.c
LD_PRELOAD=/tmp/cheat.so
rm /tmp/cheat.so
