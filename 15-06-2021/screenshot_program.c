#include <stdio.h>

int main()
{
    int x=10,y=3;
    {
        int x=100,z=10;
        printf("%d %d",x,z);
    }
    
        printf("%d %d",x,z);

    return 0;
}

// solution :  either declare a variable z or while printing remove z from it.