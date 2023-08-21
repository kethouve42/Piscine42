#!/bin/bash

git log -n5 --format=format:"%H"
output="${output//$'%'/}"
echo "$output"

