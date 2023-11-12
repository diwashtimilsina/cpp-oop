#include<stdio.h>
int main()
{
    int i, n;
    float x, sum, t;
    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    x=x*3.14159/180;
    t=x;
    sum=x;
	     
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
     
    printf("%.4f",sum);
    
}
