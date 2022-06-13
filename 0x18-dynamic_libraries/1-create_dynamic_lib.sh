#!/bin/bash
gcc -fpIC -c *.c
gcc -shared -o liball.so *.o
