#include<stdio.h>
int main()
{
	int i,j,n,s=0,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=0;
		for(j=1;j<=i;j++)
		{
			t=t+j;
		}
		s=s+t;
	}
	printf("sum=%d",s);
}
