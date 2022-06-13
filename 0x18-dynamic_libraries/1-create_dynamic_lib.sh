#!/bin/bash
gcc -fPIC -c *.c
gcc -shared liball.a *.o
