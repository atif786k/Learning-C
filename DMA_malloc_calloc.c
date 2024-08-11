#include<stdio.h>
#include<stdlib.h>
int main(){
   // printf("The size of int in my pc is %d\n" , sizeof(int));
   // printf("The size of float in my pc is %d\n" , sizeof(float));
   // printf("The size of char in my pc is %d\n" , sizeof(char));
   int n;
   float *ptr;
   printf("Enter the amount of the integer\n");
   scanf("%d" , &n);
   ptr=(float *)malloc(n * sizeof(float));
   for (int i = 0; i < n; i++)
   {
       printf("Enter the value of %d elments\n" , i+1);
       scanf("%f" , &ptr[i]);
   }
   for (int i = 0; i < n; i++)
   {
       printf("The value of %d elments is %.2f\n" , i+1 , ptr[i]);
   }
   return 0;

}