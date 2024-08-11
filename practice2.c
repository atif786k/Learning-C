#include<stdio.h>
void mutliarr(int season , int episodes , int series[season][episodes]){
for (int i = 0; i < season; i++)
{
    for (int j = 0; j < episodes; j++)
    {
        printf("Enter the episode number %d of season %d\n" , i+1 , j+1);
        scanf("%d" , &series[i][j]);
    }
    
}
for (int i = 0; i < season; i++)
{
    for (int j = 0; j < episodes; j++)
    {
        printf("The episode of season %d is %d\n" , i+1 , j+1 , series[i][j]);
        
    }
    
}

}

int main(){
    int season=2;
    int episodes=3;
    int series[2][3];
    mutliarr(season,episodes,series);
//-----disra code hai-----
//int score[5];
//score[0]=5;
//score[1]=7;
//score[2]=8;
//int *ptr=&score[0];
//printf("The value of ptr is %u\n" , *ptr);
//ptr++;

//printf("The value of ptr after incrimenting is %u\n" , *ptr);

    return 0;
}

//grammer mistakes hai lekin jo mein krna cha  rha tha vo ho gya