//3. Left rotate an array upto user's choice 
#include <stdio.h>    
     
int main()    
{    
    int arr[5] ;    
    int length = sizeof(arr)/sizeof(arr[0]);    
    int n = 3;    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        scanf("%d", &arr[i]);     
    }      
        
    for(int i = 0; i < n; i++){    
        int j, first;    
        first = arr[0];    
        
        for(j = 0; j < length-1; j++){    
            arr[j] = arr[j+1];    
        }    
        arr[j] = first;    
    }    
        
    printf("\n");    
        
    printf("Array after left rotation: \n");    
    for(int i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
} 

/* output
TC 1:
Original array: 
1
3
6
7
8

Array after left rotation: 
7 8 1 3 6 

TC 2:
Original array: 
343
899
3334
12
56

Array after left rotation: 
12 56 343 899 3334 

TC 3:
Original array: 
12
89
1253
08
56

Array after left rotation: 
8 56 12 89 1253 
*/