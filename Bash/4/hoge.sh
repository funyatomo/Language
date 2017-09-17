#!/bin/bash

# 配列の宣言
# 先頭だけと全体の出力
array=(1 "hoge" 2 "aha" 3 "hogeaha")
echo $array
echo ${array[@]}
echo

array=($(date))
echo ${array[2]}
