/*WAP to check number is power or 2 or not.*/
 
#include <stdio.h>
 
int isPowerOf2(int number)
{
    while(number!=1)
    {
        if(number%2!=0)
        {
            return 0;
            
        }
        number=number/2;
    }
    return 1;
}
 
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
 
    if(isPowerOf2(num))
        printf("%d is a power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
     
    return 0;
}

/* output:
Test case 1:
Enter an integer number: 77
77 is not the power of 2.

test case 2:
Enter an integer number: 16
16 is a power of 2.

test case 3:
Enter an integer number: 67755
67755 is not the power of 2.

*/