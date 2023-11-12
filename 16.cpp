#include <stdio.h>
int main()
{ 
	float s=0,n,i;
	printf("Enter the value of n:");
	scanf("%f",&n);
	
	for (i=1;i<=n;i++)
	{
		s=s+(1/i);
	}
	printf("%f",s);
	
}
