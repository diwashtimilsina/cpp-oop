#include<stdio.h>
#include<string.h>
int main(){
   int i,j;
   char str[25][25],temp[25];
   puts("Enter Strings one by one: ");
   for(i=0;i<5;i++)
   {
      gets(str[i]);
  }
   for(i=0;i<5;i++)
   {
      for(j=i+1;j<5;j++)
	  {
         if(strcmp(str[i],str[j])>0)
		 {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   }
   printf("Order of Sorted Strings:");
   for(i=4;i>=0;i--)
    {
      puts(str[i]);
	}
   return 0;
}
