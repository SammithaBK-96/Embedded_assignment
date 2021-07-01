// Write a program to count set bits.

#include<stdio.h>

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int num;
    printf("enter the value for num\n");
    scanf("%d",&num);
    printf("number of set bits num : %d",countSetBits(num));
}
/* output
Test case 1:
enter the value for num
9
number of set bits num : 2

Test case 2:
enter the value for num
15
number of set bits num : 4

Test case 3:
enter the value for num
800
number of set bits num : 3
*/