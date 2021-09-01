#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if((n>>31) & 1==1)
		printf("Negative\n");
	else
		printf("Positive\n");
	return 0;
}
