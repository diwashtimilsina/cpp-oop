#include<stdio.h>
 
int main() {
   int size, i, arr[100];
   int *ptr;
 
   ptr = &arr[0];
 
   printf("Enter the size of array : ");
   scanf("%d", &size);
 
   printf("\nEnter %d integers into array:\n", size);
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }
 
   ptr = &arr[size - 1];
 
   printf("\nElements of array in reverse order are:\n");
 
   for (i = size - 1; i >= 0; i--) {
      printf("%d\n",*ptr);
      ptr--;
   }
   return 0;
}
