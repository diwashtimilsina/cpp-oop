#include <stdio.h>
int main()
{
    int a[3][3];
    int i,j,row,col,sum=0;
   
    printf("Enter the elements of the matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]:\t",i,j);
			scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];

            }
        }
    }
 
    printf("The sum of even elements of a 3*3 matrix = %d\n",sum);
}
