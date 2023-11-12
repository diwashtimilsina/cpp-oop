#include <stdio.h>
int main()
{
	int a,b,c,d,e=1,f,g;
	do{
	printf("\nEnter 1 to find factorial of number.\nEnter 2 to find sum of n natural numbers\nEnter 3 to exit\n");
	scanf("%d",&a);
	if (a==1)
	{
		printf("\nEnter a number to calculate its factorial:\n");
		scanf("%d",&b);
		for(c=1;c<=b;c++)
		{
			e=e*c;
		}
		printf("\nFactorial of %d is %d\n",b,e);
	}
	else if (a==2)
	{
		printf("\nEnter the number you want to calculate sum upto:\n");
		scanf("%d",&f);
		g=(f*(f+1))/2;
		printf("\nSum of natural numbers between 1 to %d is %d",f,g);
	}
	else if (a==3)
	{
	printf("Program is exitting....");
	}
	else
	{
		printf("Invalid key\n");
	}
	} while (a!=3);
	return 0;
}
