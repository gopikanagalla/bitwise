/*WAP print reverse of integer number? 
eg:input:123
output:321
hexadecimalformat:141
binary format for 141:0001 0100 0001(this has to be printed reverse)
reverse binary for 141:1000 0010 0001*/
#include<stdio.h>
void printbinaryrev(int z)
{
	int i;
	for(i=0;i<32;i++)
	{
		if((z>>i)&0x1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
int main()
{
	int n,r=0,a;
	printf("enter n value:");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		if(a==0)
			printf("%d",a);
		r=r*10+a;
		n=n/10;
	}
	printf("reverse number:%d\n",r);
	printf("hexa decimal format for reverse number:%x\n",r);
	printbinaryrev(r);
	return 0;
}


