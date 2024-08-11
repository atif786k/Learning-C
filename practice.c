#include<stdio.h>
int average(int a , int b , int c){
     int x = (a+b+c)/3;
    return x;
}
int main(){
    int m , n , o;
    printf("Enter the value of m\n");
    scanf("%d" , &m);
    printf("Enter th evalue of n\n");
    scanf("%d" , &n);
    printf("Enter the value of o\n");
    scanf("%d" , &o);
    printf("The average of three numbers is %d" , average(m,n,o)); 
    return 0;
}
