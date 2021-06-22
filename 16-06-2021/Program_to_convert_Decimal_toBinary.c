// 3. Write program to convert Decimal to Binary using recursion.
#include <stdio.h>

int dec_bin(int n)
{
if(n==0)
 {
 
   return 0 ;
}
else
 {
    dec_bin(n/2);
    printf("%d ",n%2);
}
}
int main()
{
int num;
printf("enter the value for num : ");
scanf("%d",&num);
dec_bin(num);
return 0;
}

// output:
// enter the value for num : 5
// 1 0 1 