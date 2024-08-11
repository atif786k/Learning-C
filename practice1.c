#include<stdio.h>
float Force(float mass){
float f = mass * 9.8;
return f;
}
int main(){
    float m;
    printf("ATIF is a good boy\n");
    printf("Enter the value of mass in kgs\n");
    scanf("%f" , &m);
    printf("th evalue of Force in Newton is %f" , Force(m));
    return 0;
}