// 1. Implemention of c program for string length, string copy and 
// string comparison.(without using inbuilt function)

#include<stdio.h>

 // String compare
int strcmp(const char *cs, const char *ct)
{
	unsigned char c1, c2;

	while (1) {
		c1 = *cs++;
		c2 = *ct++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	return 0;
}

//String copy
char *strcpy(char *dest, const char *src)
{
	char *tmp = dest;

	while ((*dest++ = *src++) != '\0'){
	    // Do nothing
	}
	
	return tmp;
	
}

// String length
int strlen(const char *s)
{
	const char *sc;
	for (sc = s; *sc != '\0'; ++sc)
	{
	    //Do nothing
	}
		return sc - s;

}

int main()
{
    char *src;
    char *des;
    printf("enter the value for source and destination : \n");
    scanf("%s %s",&src,&des);
    printf("length of source string : %d\n",strlen(&src));
    printf("length of destination string : %d\n",strlen(&des));
    printf("Compare 2 strings : %d\n",strcmp(&src,&des));
    printf("Copy strings : %s\n",strcpy(&des,&src));
}

/* 
Test case 1:
enter the value for source and destination : 
happy
days
length of source string : 5
length of destination string : 4
Compare 2 strings : 1
Copy strings : happy

Test case 2:
enter the value for source and destination : 
enjoy
riding
length of source string : 5
length of destination string : 6
Compare 2 strings : -1
Copy strings : enjoy

Test case 3:
enter the value for source and destination : 
beingperfect
beingperfect
length of source string : 20
length of destination string : 12
Compare 2 strings : -1
*/