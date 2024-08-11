//by using reralloc
#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the number for your Multiplication Table :\n");
scanf("%d" , &n);
int *ptr;
ptr=(int *)malloc(10 * sizeof(int));
for (int i = 0; i < 10; i++)
{   ptr[i]=n*(i+1);
    printf("%d X %d = %d\n" , n , i+1 , ptr[i]);
}
ptr=realloc(ptr , 15 * sizeof(int));
printf("*****After Realloccating*****\n");
for (int i = 0; i < 15; i++)
{   ptr[i]=n*(i+1);
    printf("%d X %d = %d\n" , n , i+1 , ptr[i]);
}
 return 0;
}