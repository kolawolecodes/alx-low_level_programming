#!/bin/bash
gcc -fPIC -c *.c
ar rc liball.a *.o
