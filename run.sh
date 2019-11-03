#!/bin/sh
CC=${CC:-"gcc"}
OUT=$(mktemp)
$CC main.c -o $OUT
$OUT
rm $OUT
