#!/bin/bash

#str="=>"
## \cは改行を抑制するエスケープシーケンス
#echo -e "[                    ]\c"
#for i in 1 2 3 4 5 6 7 8 9 10
#do
#  echo -e "\r[${str}\c"
#  str="=="${str}
#  sleep 0.2
#done
#echo -e "\r[====================]"
flag=0

if [ ! -n $1 ]; then
  flag=$1
fi

if [ $flag -eq 10 ]; then
  echo -e "\r[====================]100%"
  exit 0
elif [ $flag -eq 11 ]; then
  echo -e "\r[====================]110%"
  exit 0
fi


str="=>"
num="0%"
lensp=9
lenspmax=10

echo -e "[                    ]${num}\c"
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
  echo -e "\r[${str}${space}]${num}\c"
  str="=="${str}
  sleep 0.2
done
echo -e "\r[====================]"
