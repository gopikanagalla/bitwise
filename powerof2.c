//WAP whether a number is a power of 2 or not?
#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("number is power of 2\n");
	else
		printf("number is not a power of 2\n");
	return 0;
}
