#include<stdio.h>
int main()
{
	int c,f,cn,fn;
	printf("enter temperature in celcius:");
	scanf("%d",&c);
	f=1.8*c+32;
	printf("the fahrenheit value is %d",f);
	printf("\nenter a value in temperature:");
	scanf("%d",&fn);
	cn=(fn-32)/1.8;
	printf("the celcius value is %d",cn);
}
