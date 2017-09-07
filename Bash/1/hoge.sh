#!/bin/bash
# shebang should be written in first line

# How to run shell script
# $ bash fundamental.sh
# or
# $ chmod +x fundamental.sh
# $ ./fundamental.sh

echo "Hello, world!"

var = "hoge"
var="hoge"
# 変数の宣言においてスペースは不要

echo $var
# $を付けて、変数を展開する。

echo "Type 'hoge' or 'fuga'"
read str

if [ "$str" = "hoge" ]; then
  echo "You typed 'hoge'"
elif [ "$str" = "fuga" ]; then
  echo "You typed 'fuga'"
else
  echo "HAHAHA"
fi
echo
# if文を使用したときの条件分岐

echo "Type \"hoge\" or \"fuga\""
# \でダブルクウォーテーションをエスケープ
read str

case "$str" in
  "hoge" ) :
    echo "You typed 'hoge'";;
  "fuga" ) echo "You typed 'fuga'";;
  * ) echo "HAHAHA";;
esac
echo
# case文を使用したときの条件分岐




exit 0
