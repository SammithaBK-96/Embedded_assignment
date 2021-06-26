// 1. Find the second largest number in the array
#include <stdio.h>

int main() {
   int array[10] ;
   int j=0;
   for(j=0;j<10;j++){
       scanf("%d",&array[j]);
   }
   int i, largest, second;

   if(array[0] > array[1]) {
      largest = array[0];
      second  = array[1];
   } else {
      largest = array[1];
      second  = array[0];
   }

   for(i = 2; i < 10; i++) {
      if( largest < array[i] ) {
         second = largest;
         largest = array[i];
      } else if( second < array[i] ) {
         second =  array[i];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}

/* output
Tc 1:
20
10
46
23
899
12
43
76
11
89
Largest - 899 
Second - 89 

Tc 2:
4
0
5
7
8
2
4
8
1
77
Largest - 77 
Second - 8 

TC3:
123
456
645
125
878
444
099
678
558
099
Largest - 878 
Second - 678 

*/