#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the hour Employee works:\n");
	scanf("%d",&a);
	if (a<8)
	{
		b=(8*100);
		printf("Total Salary is %d",b);
	}
	else 
	{
		b=(8*100)+((a-8)*120);
		printf("Total Salary is %d",b);
	}
	return 0;
}
