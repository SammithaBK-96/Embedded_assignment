#include <stdio.h>
int main()
{
 
int arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
int i,j;
for(i=0;i<3;i++)
{
printf("address of %dth array =%u %u\n",i,arr[i],*(arr+i));
for(j=0;j<4;j++)
{
printf("%d ",arr[i][j]);
printf("%d ",*(*(arr+i)+j));
printf("%d ",(*(*arr+i)+j));
}
printf("\n");
}
}

/*output :
 address of 0th array =3392866608 3392866608
10 10 10 11 11 11 12 12 12 13 13 13 
address of 1th array =3392866624 3392866624
20 20 11 21 21 12 22 22 13 23 23 14 
address of 2th array =3392866640 3392866640
30 30 12 31 31 13 32 32 14 33 33 15 
*/