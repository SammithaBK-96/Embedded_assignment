 #include<stdio.h>

#define CHECK(n,k) if (n & (1 << (k - 1))){\
                      printf("SET");}\
                   else {\
                      printf("NOT SET");\
}

int main()
{
    unsigned int num;
    int pos;
    printf("enter the value for value and bitt\n");
    scanf("%X%d",&num,&pos);
    CHECK(num,pos);
}


/* output
Test case 1:
enter the value for value and bitt
39
2
NOT SET

Test case 2:
enter the value for value and bitt
8
4
SET

Test case 3:
enter the value for value and bitt
0x12345678
8
NOT SET
*/