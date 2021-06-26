#include <stdio.h>

#define SET(value,bit) (value |=  (1<<bit))
#define CLR(value,bit) (value &= ~(1<<bit))
#define TOGGLE(value,bit) (value ^= (1<<bit))

int main(){
	
	unsigned int bit,val ;
	printf("enter the values for val and bit\n");
	scanf("%x%d",&val,&bit);
	
	printf("val = %X\n",val);
	SET(val,bit);
	printf("Aftre setting  bit %X, val = %X\n", bit, val);
	CLR(val,bit);
	printf("Aftre clearing bit %d, val = %X\n", bit, val);	
	TOGGLE(val,bit);
	printf("Aftre toggling bit %d, val = %X\n", bit, val);	
	return 0;	
}

/* Output:
TC 1: 
enter the values for val and bit
0x12345678
1
val = 12345678
Aftre setting  bit 1, val = 1234567A
Aftre clearing bit 1, val = 12345678
Aftre toggling bit 1, val = 1234567A

TC 2:
enter the values for val and bit
0x12345678
5
val = 12345678
Aftre setting  bit 5, val = 12345678
Aftre clearing bit 5, val = 12345658
Aftre toggling bit 5, val = 12345678

TC 3: 

enter the values for val and bit
0x12345678
3
val = 12345678
Aftre setting  bit 3, val = 12345678
Aftre clearing bit 3, val = 12345670
Aftre toggling bit 3, val = 12345678

*/


  
