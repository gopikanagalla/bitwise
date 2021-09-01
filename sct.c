//Write a Macro's Set, clear and toggle n'th bit using bit wise operator?
#include<stdio.h>
#define SET_BIT(x,p) (x|(0x1 << p))
#define CLEAR_BIT(x,p) (x&(~(0x1 << p)))
#define TOGGLE_BIT(x,p) (x^(0x1 << p))
int main()
{
	int x,p;
	printf("enter x and p values:");
	scanf("%d%d",&x,&p);
	printf("after set:%d\n",SET_BIT(x,p));
	printf("after clear:%d\n",CLEAR_BIT(x,p));
	printf("after toggle:%d\n",TOGGLE_BIT(x,p));
	return 0;
}

