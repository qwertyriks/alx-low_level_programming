#!/bin/bash

# Converting the DOS line endings to Unix LF
dos2unix *.c

# Resove trailing whitespaces
sed -i 's/[[:space:]]\+$//' *.c