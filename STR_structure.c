#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary; 
    char name[1];
};
int main(){
struct employee E1 , E2 , E3;
printf("Enter the code of E1\n");
scanf("%d" , &E1.code);
printf("Enter the salary of E1\n");
scanf("%f" , &E1.salary);
printf("Enter the name of E1\n");
scanf("%s" , E1.name);

printf("Enter the code of E2\n");
scanf("%d" , &E2.code);
printf("Enter the salary of E2\n");
scanf("%f" , &E2.salary);
printf("Enter the name of E2\n");
scanf("%s" , E2.name);

printf("Enter the code of E3\n");
scanf("%d" , &E3.code);
printf("Enter the salary of E3\n");
scanf("%f" , &E3.salary);
printf("Enter the name of E3\n");
scanf("%s" , E3.name);
 return 0;
}








