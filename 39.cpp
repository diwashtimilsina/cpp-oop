#include<stdio.h>

int main()
{
    float num[1000],c,small;
    int i,n;
    printf("Enter the number of element in array:\n");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&num[i]);
    }
    
	small=num[0];
    
    for(i =0;i<n5;i++)
    {
       c=num[i];
       if(c<small) small = c;

    }
     printf("Smallest element of array is %.3f\n",small);
    return 0;
}
