#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, temp1, temp2, remainder, p = 0, result = 0;
    printf("Enter number you want to find armstrong number upto: ");
    scanf("%d",&n);
    for(i =1; i < n; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            p++;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, p);
            temp2 /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        p = 0;
        result = 0;
    }
    return 0;
}
