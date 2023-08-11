#include<stdio.h>
int main()
{
	int i,n;
	float a[50],l,s;
	printf("enter the no of elements in an array:");
	scanf("%d",&n);
	printf("enter the arrary elements:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l&&a[i]!=0)
		{
			l=a[i];
		}
		else if(a[i]<s&&a[i]!=0)
		{
			s=a[i];
		}
	}
	printf("the largest num is:%.2f",l);
	printf("the smallest num is:%.2f",s);
}
