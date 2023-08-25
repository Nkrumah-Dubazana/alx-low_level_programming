#!/usr/bin/bash
gcc -wall -c -fpic *.c
gcc -shared *.o -oliball.so
