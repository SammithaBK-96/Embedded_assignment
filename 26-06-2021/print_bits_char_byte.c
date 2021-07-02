/* SwapPrint bits in the character without using bitwise operator*/

#include<stdio.h>

typedef union{
	struct{
		unsigned int bit_0: 1;
		unsigned int bit_1: 1;
		unsigned int bit_2: 1;
		unsigned int bit_3: 1;
		unsigned int bit_4: 1;
		unsigned int bit_5: 1;
		unsigned int bit_6: 1;
		unsigned int bit_7: 1;
	}bits;

	char ch;
}union_var;

int main()
{
	union_var union_obj;
	int var = 0;
	printf("Enter input value: ");
	scanf("%d", &var);
	union_obj.ch = var;
	
	printf("bit_0: %d\n", union_obj.bits.bit_0);	
	printf("bit_1: %d\n", union_obj.bits.bit_1);
	printf("bit_2: %d\n", union_obj.bits.bit_2);
	printf("bit_3: %d\n", union_obj.bits.bit_3);
	printf("bit_4: %d\n", union_obj.bits.bit_4);
	printf("bit_5: %d\n", union_obj.bits.bit_5);
	printf("bit_6: %d\n", union_obj.bits.bit_6);
	printf("bit_7: %d\n", union_obj.bits.bit_7);

	return 0;
}

/* Output
Test case 1:
Enter input value: 66
bit_0: 0
bit_1: 1
bit_2: 0
bit_3: 0
bit_4: 0
bit_5: 0
bit_6: 1
bit_7: 0

Test case 2:
Enter input value: 12
bit_0: 0
bit_1: 0
bit_2: 1
bit_3: 1
bit_4: 0
bit_5: 0
bit_6: 0
bit_7: 0

Test case 3:
Enter input value: 11
bit_0: 1
bit_1: 1
bit_2: 0
bit_3: 1
bit_4: 0
bit_5: 0
bit_6: 0
bit_7: 0
*/