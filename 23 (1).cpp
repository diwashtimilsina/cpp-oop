#include<stdio.h>
int main()
{
 	int i, j,row,column,a[10][10];
 	printf("Please Enter Number of rows and columns:\n");
 	scanf("%d%d",&row,&column);
 	printf("\nPlease Enter the Matrix Elements\n");
 	for(i = 0; i < row; i++)
  	{
   		for(j = 0;j<column;j++)
    	{
      		 printf("Enter a[%d][%d]:\t",i,j);
			  scanf("%d", &a[i][j]);
    	}
  	}
 	for(i = 0; i < row; i++)
  	{
  		printf("\n");
   		for(j = 0; j < column; j++)
    	{
    		if(j >= i)
    		{
    			printf("%d\t", a[i][j]);
			}
			else
			{
				printf("0\t");
			}
   	 	}
  	}
  	
 	return 0;
}
