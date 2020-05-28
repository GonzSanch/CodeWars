#! /usr/bin/bash

a=$(echo "$1 * -1" | bc )
echo $a
