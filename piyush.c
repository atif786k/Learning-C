# include<stdio.h>
void addition(int a, int b){
    int c = a+b;
    printf("sum is : %d" , c);
}
int main(){
int a ,b;
printf("Enter the value of a : \n");
scanf("%d" , &a);
printf("Enter the value of b : \n");
scanf("%d" , &b);
addition(a,b);
return 0;
}