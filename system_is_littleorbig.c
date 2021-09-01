#include<stdio.h>
int main()
{
	unsigned int x=0x76543210;
	char *c=(char *)&x;
	if(*c==0x10)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	return 0;
}
