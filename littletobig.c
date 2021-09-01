//WAP to convert Little endian integer to Big endian integer 
#include<stdio.h>
int main()
{
        int x=0x12345678,res;
	printf("little endian:0x%X\n",x);
	res=(((x>>24) & 0x000000ff) | ((x>>8) &0x0000ff00) | ((x<<8) & 0x00ff0000)|((x<<24) & 0xff000000));
	printf("big endian:0x%X\n",res);
	return 0;
}

