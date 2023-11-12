#include <stdio.h>
int main()
{
    int mat1[3][3],res=0;
    printf("Enter elements of matrix:\n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
			scanf("%d", (*(mat1 + i) + j));
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            res = res + *(*(mat1 + i) + j);
        }
    }
    printf("Sum of all elements:%d",res);
    return 0;
}
    


