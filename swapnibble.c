#include<stdio.h>
#define swapnibble(data) (((data&0x0F)<<4)|((data&0xF0)>>4))
int main()
{
	char data=0x12;
	printf("%X\n",swapnibble(data));
	return 0;
}
