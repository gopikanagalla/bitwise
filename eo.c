//WAP whether a number is ODD or EVEN using bitwise.
#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n&0x1)
		printf("odd\n");
	else
		printf("even\n");
	return 0;
}
