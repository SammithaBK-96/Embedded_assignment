#include <stdio.h>

int main() {
   int a = 2,b=1,x;
   x=(a++ && (!b) && b|| ++a);
   printf("x = %d",x);
   return 0;
}

// output : x = 1