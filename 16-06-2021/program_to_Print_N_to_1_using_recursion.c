
#include <stdio.h>

// 16-06-21 ASSIGNMENT :
// 1. Write a program to Print N to 1 using recursion and also draw the diagram .

int recursion(int n)
{
    if(n==0){
        return 1;
    }
    else{
        printf("%d ",n);
        recursion(n-1);
    }
}
int main()
{
recursion(10);
    return 0;
}

/*  output 
10 9 8 7 6 5 4 3 2 1 */
