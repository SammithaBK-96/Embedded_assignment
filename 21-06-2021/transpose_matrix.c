#include<stdio.h>
int main()
{
int arr[3][3]={1,1,1,2,2,2,3,3,3};
int transpose[3][3]={0};
 
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
transpose[j][i]=arr[i][j];
}
}
 
//printing
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
 
printf("%d ",transpose[i][j]);
}
printf("\n");
}
return 0;
}


// output
// 1 2 3 
// 1 2 3 
// 1 2 3 
