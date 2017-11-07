#!/bin/bash

# 配列の宣言
# 先頭だけと全体の出力 @,*
array=(1 "hoge" 2 "aha" 3 "hogeaha")
echo $array
echo ${array[@]}
echo ${array[*]}
echo

# インデックスには変数の利用も可能
array=($(date))
index=2
echo ${array[$index]}
echo

# 配列の要素を追加する
echo ${array[@]}
array+=("hoge" "aha" "123")
echo ${array[*]}; echo

for i in "${array[@]}"; do echo $i; done
echo
for i in "${array[*]}"; do echo $i; done
echo

# 配列の要素数の出力
echo "${#array[*]}"
echo "${#array[@]}"
echo

# IFS関連の問題
array=(1 2 3 4 5 "6 6")
for i in ${array[@]}; do echo $i; done
echo
for i in ${array[*]}; do echo $i; done
echo
for i in "${array[@]}"; do echo $i; done
echo

# 文字列についての細かいところは置いておく
