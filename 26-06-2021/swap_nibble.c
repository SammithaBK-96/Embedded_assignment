/* Swap nibble without using bitwise
 * operators */

#include<stdio.h>

typedef union {
	struct {
		unsigned int FirstNibble : 4;
		unsigned int secondNibble : 4;
	}Nibble;
	char ch;
}union_1;

int main()
{
	union_1 union_obj;
    union_obj.ch=0x23;
	printf("Befor swaping the value of ch: 0x%x\n", union_obj.ch);
	printf("Befor swaping  0x%x,  0x%x\n", union_obj.Nibble.FirstNibble, union_obj.Nibble.secondNibble);

	short int temp = union_obj.Nibble.FirstNibble;
	union_obj.Nibble.FirstNibble	= union_obj.Nibble.secondNibble;
	union_obj.Nibble.secondNibble = temp;

	printf("After swaping  0x%x,  0x%x\n", union_obj.Nibble.FirstNibble, union_obj.Nibble.secondNibble);
	printf("After swaping the value of ch: 0x%x\n", union_obj.ch);

	return 0;
}

/* Output
Test case 1:

Befor swaping the value of ch: 0x23
Befor swaping  0x3,  0x2
After swaping  0x2,  0x3
After swaping the value of ch: 0x32

*/