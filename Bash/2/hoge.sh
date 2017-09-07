#!/bin/bash

for i in  0 1 2 3 5
do
  echo $i
done
echo
# for文での繰り返し

while [ "$str" = "" ]
do
  echo "Type something."
  read str
done
echo "You typed \"$str\"."

while :
do
  echo "Type end, quit or exit to exit the loop."
  read str
  if [ "$str" = "end" -o "$str" = "quit" -o "$str" = "exit" ]; then
    break
  fi
done
# while文での繰り返し
# breakでループを抜ける

var
echo $?
:
echo $?
# 直前のコマンドの終了ステータスを参照する

if grep 'loop' hoge.sh >/dev/null 2>&1
  echo "loop found."
fi

