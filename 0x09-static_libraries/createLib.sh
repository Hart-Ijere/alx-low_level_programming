#!/bin/bash
# This script compiles source files and creates a static library

gcc -c *.c  # Compile all C files into object files
ar rcs libmy.a *.o  # Create the static library from object files
