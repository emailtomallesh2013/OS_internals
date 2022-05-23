# !/bin/bash
 
#read Num
Num=$1
s=0
 
while [ $Num -gt 0 ]
do
    r=$(( $Num % 10 ))
 
    Num=$(( $Num / 10 ))
 
    s=$(( $s + $r ))
done
echo  "sum of digits of $1 is : $s"
