#include <stdio.h>
int main()
{
int arr_1[3][3]={1,1,1,2,2,2,3,3,3};
int arr_2[3][3]={1,1,1,2,2,2,3,3,3};
int res_[3][3];
 
int i,j,k;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
res_[i][j]=0;
for(k=0;k<3;k++)
{
res_[i][j] = res_[i][j] + (arr_1[i][k] * arr_2[k][j]);
}
 
}}
 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",res_[i][j]);
}
printf("\n");
}
return 0;
}


// output:
//6 6 6 
//12 12 12 
//18 18 18 