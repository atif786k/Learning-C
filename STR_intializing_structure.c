#include<stdio.h>
#include<string.h>
struct Gamer{
    char profession[30];
    float years_of_experience;
    int games_played;
     
};
int main(){
struct Gamer details = {"Gamer" , 4.5 , 78628};
printf("Profssion is:%s\n" , details.profession);
printf("%.1f years of experience\n" , details.years_of_experience);
printf("Numbers of games played:%d\n" , details.games_played);
return 0;
}