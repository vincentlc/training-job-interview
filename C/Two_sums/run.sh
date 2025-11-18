#!/bin/bash

# Build the project
make

# Check if build succeeded
if [ $? -eq 0 ]; then
    # Run the program
    make run
else
    echo "Build failed."
fi
