#include<stdio.h>
int addOne(int x)
{
	int m=1;
	while(x & m)
	{
		x=x^m;
		m <<= 1;
	}
	x=x^m;
	return x;
}
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("%d\n",addOne(n));
	return 0;
}
