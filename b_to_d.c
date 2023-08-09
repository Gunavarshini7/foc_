#include<stdio.h>
int main()
{
	int n,d,de=0,b=0,bin;
	printf("enter a binary value:");
	scanf("%d",&n);
	bin=n;
	while(n!=0)
	{
		d=n%10;
		de=de+(d<<b);
		b=b+1;
		n=n/10;
	}
	printf("the decimal value of the entered binary number is:%d",de);
}
