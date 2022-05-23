#!/bin/bash

mkdir root

for i in `seq 1 5`;
do
   mkdir root/dir${i}
   for j in `seq 1 4`;
   do
      touch root/dir${i}/file${j}
      for k in `seq 1 ${j}`;
      do
         echo $j >> root/dir${i}/file${j}

      done
   done
done 
