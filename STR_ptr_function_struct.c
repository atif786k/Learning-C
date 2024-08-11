#include<stdio.h>
#include<string.h>
struct glass{
    int quantity;
    float size;
    char type[30];
};
void work(struct glass details){
    printf("Quantity of glasses are:%d\n" , details.quantity);
    printf("Size of the glass is:%.2f\n" , details.size);
    printf("Glass is of %s type\n" , details.type);
}
int main(){                       // we can also use the 'typedef' for our convience for example:
struct glass details;             // typedef struct glass{
struct glass *ptr;                // int quantity;
ptr = &details;                   // float size;
ptr->quantity = 786;              // char type[30];
ptr->size = 6.3;                  // }gls;
strcpy(ptr->type , "italian");    // now we can write = gls instead of = struct glass
work(details); 
 return 0;
}