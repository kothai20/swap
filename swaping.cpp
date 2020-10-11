#include<stdio.h>
main()
{
	int a,b;
	printf("enter number for a and b");
	scanf("%d%d",&a,&b);
	printf("values before swaping:%d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("values after swaping:%d %d",a,b);
	return 0;
}
