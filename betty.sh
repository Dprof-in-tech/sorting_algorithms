#!/bin/bash

for file in *.c; do
	betty $file
done
