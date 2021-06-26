// 2. check if array is sorted in ascending order or not?
#include <stdio.h>
int arraySortedOrNot(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
 
    if (arr[n - 1] < arr[n - 2])
        return 0;
 

    return arraySortedOrNot(arr, n - 1);
}
 
// Driver code
int main()
{
    int arr[5];
    printf("enter elements for array\n");
    int i=0;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        printf(" output Yes");
    else
          printf(" output NO");
}

/* output
TC 1:
enter elements for array
1
3
5
7
8
 output Yes
 
 Tc 2:
 enter elements for array
1
9
4
0
4
 output NO
 
 Tc 3:
 enter elements for array
11
94745
1225
00
32235
 output NO
 
*/
