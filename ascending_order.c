#include<stdio.h>
int main()
{
	int i,j,k,n,a[50],t;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("the ascending order is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
