#include<stdio.h>
int main(){
int age[4];
int *ptr = &age[0];
for(int i = 0 ; i<4 ; i++){
    printf("Enter the age of %d\n" , i+1);
    scanf("%d" , ptr);
    ptr++;
}
for(int i = 0 ; i<4 ; i++){
    printf("The age of %d is %d\n" , i+1 , age[i]);
}  

    return 0;
}