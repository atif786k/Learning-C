#include<stdio.h>
int main(){
    FILE *ptr;
    int num = 786;
    int freak;
    ptr = fopen("kuchbhi.txt" , "w");
    fprintf(ptr , "This is Mohammad Atif , Genius , playboy\n" , freak);
    fprintf(ptr , "khubaib bhout chota madara chole hai\n" , freak);
    fprintf(ptr , "The value of num is: %d\n" , num);
    fclose(ptr);
     return 0;
}