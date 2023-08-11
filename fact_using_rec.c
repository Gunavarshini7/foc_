#include<stdio.h>
int main()
{
	int n; 
	printf("enter number:");
	scanf("%d",&n);
	printf("the factorial of %d is : %d\n",n,fact(n));	
}
int fact(n)
int n;
{
	if(n==0)
	
		return(1);
		else
		return(n*fact(n-1));
	
}
