#include<stdio.h>
void swap(int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b= temp;
}
int main(){
int x = 45;
int *m = &x; 
int y = 18;
int *n = &y;
printf("The value of x and y is %d and %d\n" , x , y);
swap(m , n);
printf("The value of x and y after swap is %d and %d\n" , x , y);
return 0;
}