#! /usr/bin/bash

<absolute_path_to_the_first_script>/multi_return.sh &> output.txt
grep -e "Segmentation fault (core dumped)" output.txt
