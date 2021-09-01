#include<stdio.h>  
#define bool int 
  
bool isPowerOfFour(unsigned int n) 
{ 
	int count = 0; 
	if ( n && !(n&(n-1)) ) 
	{
		while(n > 1) 
		{ 
			n  >>= 1; 
			count += 1; 
		}       
		return (count%2 == 0)? 1 :0; 
	} 
	return 0;
}          
int main() 
{ 
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(isPowerOfFour(num)) 
		printf("%d is a power of 4\n",num); 
	else
		printf("%d is not a power of 4\n",num); 
} 

