#! /bin/bash
Name[0]="suman"
Name[1]="rakesh"

for ((i=0; i<2; i++))  #c styled for loop
do
	echo ${Name[$i]}
done

for i in {0..10..2} # Range using shell range
do
    echo $i
done
    
echo -n "files present in the current directory: "
for file in * # * is ls
do
	echo -n $file 
done
echo 

for file in *
do
    echo $file
done    

echo -n "fibonacci number:"
prev2=0
prev1=1
for((i=0; i<$1; i++))
do
    prev1=`expr $prev1 + $prev2`
    prev2=`expr $prev1 - $prev2`
    printf "$prev1 "
done    
echo
