#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f = f*i;	
	}
 	return f;
}
main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	printf("The Factorial of %d is %d.",a,fact(a));
	return 0;
}

