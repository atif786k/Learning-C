#include<stdio.h>
 void same(int *j){
   (*j)*=10;
}
int main(){
    int i=45;
    int *j=&i;
    printf("The value of i is %d\n" , *j);
    same(j);
    printf("The value of ten times of i is %d\n" , *j);
    return 0;
}