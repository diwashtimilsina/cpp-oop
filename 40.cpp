#include<stdio.h>

int main()
{
    int i,n,num[1000];
    printf("Enter the number of element in array:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    
    for(i =0;i<n;i++)
    {
       if (num[i]%2==0)
       {
       	printf("%d\t",num[i]);
	   }

    }
    return 0;
}
