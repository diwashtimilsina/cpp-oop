#include <stdio.h>
int add(int a, int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int main()
{
	int a,b,sum;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("\nSum of %d and %d is %d",a,b,sum);
	return 0;
}
