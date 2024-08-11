#include<stdio.h>
int main(){
    FILE  *ptr;
   
    int z;
    printf("Enter the number for your Multiplication Table\n");
    scanf("%d" , z);
    
    ptr = fopen("MultiTable.txt" , "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr , "%d X %d = %d\n" , z , i+1 , z*(i+1));
    }
    fclose(ptr);
    printf("****Successfully Generated****");
    return 0;

}