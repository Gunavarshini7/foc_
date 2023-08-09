#include<stdio.h>
int main()
{
	int x,n;
	printf("enter a num:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		printf("%d\t",x*x);
	}
}
