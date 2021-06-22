/*
1. Write a simple c program to demonstrate inline function advantage over the macro.
*/

/*
Advantage:
Macro function will be blindly expanded in pre-processor stage.
Consider below code in which ++num will be replaced as it is.
*/
#include <stdio.h>
#define CUBE(x) x*x*x

static inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("cube using inline function : %d\n",cube(num));
    printf("cube using macro function : %d\n",CUBE(num));// In pre-processor stage SQR(++num) 
                                                            // will be expanded as ++num*++num
    return 0;
}

/*
Output:
test case 1:
Enter the number
5
cube using inline function : 36
cube using macro function : 56
test case 2
Enter the number
0
cube using inline function : 1
cube using macro function : 6
*/