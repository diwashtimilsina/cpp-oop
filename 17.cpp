#include <stdio.h>
int main()
{
	int i,n;
	float x,sum=1,t=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	
	printf("Enter the value of x:\n");
	scanf("%f",&x);
	
	for (i=1;i<=n;i++)
	{
		 t=t*x/i;
        sum=sum+t;
	}
	printf("%f",sum);
}
