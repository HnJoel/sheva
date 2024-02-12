#!/bin/sh
bi=$(cat book.csv | grep $1 | awk -F ',' '{print $1}')
vi="$bi,$2,$3"
echo $(nl bcv.csv | sed -n "/$vi/{p;q}")
