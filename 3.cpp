#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st angle of traingle:");
	scanf("%d",&a);
	printf("Enter 2nd angle of traingle:");
	scanf("%d",&b);
	printf("Enter 3rd angle of traingle:");
	scanf("%d",&c);
	
	if (a+b+c==180)
	{
		printf("\nTraingle is valid");
		if (a==b && b==c && c==a)
	{
		printf("\nTraingle is Equilateral");
	}
	else if (a==b || a==c || b==c)
	{
		printf("\nTriangle is isoceles");
	}
	else{
		printf("Triangle is scalene");
	}
	}
	else 
	{
		printf("\nTraingle is not valid");
	}
	
	return 0;
}
