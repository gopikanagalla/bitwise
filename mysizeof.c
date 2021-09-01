//WAP to implement the sizeof operation using the bitwise operator. 
#include<stdio.h>
int mysizeof(char x)
{
	x=1;
	int count=1;
	while(x>0)
	{
		x=x<<1;
		count++;
	}
	return count/8;
}
int main()
{
	char x;int y;
	printf("enter the character:");
	scanf("%c",&x);
	y=mysizeof(x);
	printf("the size of %c is %d byte\n",x,y);
	return 0;
}

