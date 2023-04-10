#!/bin/bash

gcc Wall -pedantic -Weror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
