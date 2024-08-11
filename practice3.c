#include<stdio.h>
void MultiTable(int *multiTable , int num , int n){
    printf("The Multiplication Table of %d is \n" , num);
    for (int i = 0; i < n; i++)
    {
         multiTable[i]=num*(i+1);
         printf("%d X %d = %d\n" , num , i+1 , multiTable[i]);
    }
    
}
int main(){
    int x , y;
    printf("Enter the First Dimension for the array\n");
    scanf("%d" , &x);
    printf("Enter the Second Dimension for the array\n");
    scanf("%d" , &y);
    int multiTable[x][y];
    int num;
    for (int i = 0; i < multiTable[x][y]; i++)
    {
        printf("Enter the number for your Multiplication Table:\n");
        scanf("%d" , &num);
        MultiTable(multiTable[x] , num , y);
    }
    
    //printf("Enter the number for your Multiplication Table:\n");
    //scanf("%d" , &num[0]);
    
    //MultiTable(multiTable[x] , num[0] , y);
    //printf("Enter the number for your Multiplication Table:\n");
    //scanf("%d" , &num[1]);
    //MultiTable(multiTable[x] , num[1] , y);
//----ye dusra code hai-----
//int innings[10];
//innings[0]=115;
//innings[1]=73;
//innings[2]=87;
//int *ptr=&innings[0];
//printf("The value of first elemnet is %d\n" , *ptr);
//ptr++;
//ptr++;
//printf("The vlaue of third elemnet is %d\n" , *ptr);
return 0;
}