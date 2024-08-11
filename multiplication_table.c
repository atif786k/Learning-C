#include<stdio.h>
int main(){
int multi[10];
int x;
printf("Enter the number for your Multiplication Table\n");
scanf("%d" , &x);
printf("The Multiplication Table of %d is\n" , x);
//for (int i = 0; i < 10; i++)
//{
//    multi[i] = x*(i+1);
//}
for (int i = 1; i < 10; i++)
{
    multi[i] = x*(i);
    printf("%d X %d = %d\n" , x , i , multi[i]);
}


        return 0;
}