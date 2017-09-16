#!/bin/bash

var1=123
var2=hogehoge
var3="a b c "
# =の前後に空白を入れない
# 値の設定時は先頭に$を付けない

echo $var1 $var2 $var3


# 標準出力のみを変数に設定
VAR=`echo hoge`
echo $VAR
echo

# 標準エラー出力のみを変数に設定
# 2>&1 と /dev/null の順番に注意
VAR=`hoge 2>&1 >/dev/null;echo '$? is '$?`
echo $VAR
echo

# 標準出力・標準エラー出力の両方を変数に設定
VAR=`ls hogehoge 2>&1`
echo $VAR
echo

# ` の代替機能 $(command)
VAR=$(echo hello)
echo $VAR
echo
