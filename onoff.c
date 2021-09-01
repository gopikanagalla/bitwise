//WAP Check if the 20th bit of a 32-bit integer is on or off?
#include<stdio.h>
int main()
{
	int x,p;
	printf("enter x and p values:");
	scanf("%d%d",&x,&p);
	if(x&(0x1<<p))
		printf("on\n");
	else
		printf("off\n");
	return 0;
}
