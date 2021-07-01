// WAP to fine even or odd using bitwise operator.
#include <stdio.h>
#define EVENORODD(num) (num&=1)
int main()
{
    int number;
    printf("enter the value for number\n");
    scanf("%d",&number);
 
    if(!EVENORODD(number))
        printf("Even");
    else
        printf("Odd");
    
  
    return 0;
}

/* out put
Test case 1:
enter the value for number
23 
Odd

Test case 2:
enter the value for number
55 
Odd

Teset case 3:
enter the value for number
123456778
Even
*/