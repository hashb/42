#!/bin/bash

set -e
let num1=`echo $FT_NBR1 | tr "'\\\\\\\\\"?\!" "01234"`
let num2=`echo $FT_NBR2 | tr "mrdoc" "01234"`
let sum=$num1+$num2
let output=`echo "obase=13; ibase=5; $sum" | bc`

echo `echo $output | tr "0123456789ABC" "gtaio luSnemf"`
