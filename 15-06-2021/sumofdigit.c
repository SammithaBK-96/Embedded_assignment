#include <stdio.h>
void sumofdigit(int n) {
   int sum = 0,temp;
   while(n > 0 || sum > 9) {
      if(n == 0) {
         n = sum;
         sum = 0;
      }
      temp = n % 10;
      sum = sum + temp;
      n /= 10;
   }
   printf("Output : %d",sum);
}
int main() {
   int n = 4543;
   sumofdigit(n);
   return 0;
}

// output : 7