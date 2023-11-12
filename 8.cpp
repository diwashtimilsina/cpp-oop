#include <stdio.h>
int main()
{
	int r=0,a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	
	do{
		r=r*10;
		r=r+a%10;
		a=a/10;
		
	}while (a!=0);
	
	if (a=r)
	{
		printf("palindrome",a);
	}
	else
	{
		printf("not palindrome",a);
	}
	return 0;
}
