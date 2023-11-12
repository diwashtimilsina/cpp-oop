#include <stdio.h>
int main()
{
    int a[12][12];
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter a[%d][%d]:\t",i,j);
			scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
 
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
