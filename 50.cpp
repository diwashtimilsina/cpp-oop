#include<stdio.h>
int sum=0,rem;
reverse(int num){
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      reverse(num/10);
   }
   else
    {
      return sum;
	}
   return sum;
}

int main(){
   int num,reverse_number;
   printf("\nEnter any number:");
   scanf("%d",&num);

   reverse_number=reverse(num);
   printf("\nAfter reverse the no is :%d",reverse_number);
   return 0;
}

