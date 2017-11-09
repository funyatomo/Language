#!/bin/sh

# \rは行頭にカーソルを移動するエスケープシーケンス
echo "abcdefg\r123"

str="=>"
# \cは改行を抑制するエスケープシーケンス
echo "[                    ]\c"
for i in 1 2 3 4 5 6 7 8 9 10
do
  echo "\r[${str}\c"
  str="=="${str}
  sleep 0.2
done
echo "\r[====================]"

str="=>"
num="0%"
lensp=9
lenspmax=10

echo "[                    ]${num}\c"
for i in 1 2 3 4 5 6 7 8 9 10
do
  num=${i}"0%"
  lensp=`expr ${lenspmax} - ${i} + 1`
  isp=1
  space=""
  while [ $isp -lt $lensp ]
    do
      space=${space}"  "
      isp=`expr ${isp} + 1`
    done
  echo "\r[${str}${space}]${num}\c"
  str="=="${str}
  sleep 0.4
done
echo "\r[====================]"
