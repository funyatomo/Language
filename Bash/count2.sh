#!/bin/bash

a=1

while [ $a -le 12 ]
do
    echo $a
    a=`expr $a + 1`
done

