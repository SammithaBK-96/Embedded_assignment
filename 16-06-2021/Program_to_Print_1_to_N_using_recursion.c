
#include <stdio.h>

// 16-06-21 ASSIGNMENT :
// 1. Write a program to Print 1 to N using recursion and also draw the diagram .

int recursion(int n)
{
    if(n==0){
        return 1;
    }
    else{
        recursion(n-1);
        printf("%d ",n);

    }
}
int main()
{
recursion(10);
    return 0;
}

/*  output 
1 2 3 4 5 6 7 8 9 10  */


