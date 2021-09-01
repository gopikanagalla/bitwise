//WAP Swap any two numbers using bitwise operators.
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x,y values\n");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("%d %d\n",x,y);
	return 0;
}
