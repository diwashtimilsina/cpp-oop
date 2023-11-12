#include <stdio.h>
int main()
{
	int limit,i2,n2,n3=0,i;
	printf("Enter a number:\n");
	scanf("%d",&limit);
	for (i=1;i<=limit;i++)
	{
	i2=i;
	do{
		n2=i2%10;
		i2=i2/10;
		n3=n3*10+n2;
		
	}while (i2>0);	
	if (n3==i)
	{
		printf("%d\t",n3);
	}
	n3=0;	
	}
	return 0;
}
