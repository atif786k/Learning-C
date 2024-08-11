#include<stdio.h>

struct timeStamp{
int hour;
int minute;
int seconds;
int date;
int month;
int year;
};

void show(struct timeStamp TS1 , struct timeStamp TS2){
    printf("The 1st timeStamp is %d:%d:%d::%d/%d/%d\n" , TS1.hour , TS1.minute , TS1.seconds , TS1.date , TS1.month , TS1.year);
    printf("The 2nd timeStamp is %d:%d:%d::%d/%d/%d\n" , TS2.hour , TS2.minute , TS2.seconds , TS2.date , TS2.month , TS2.year);
}

int timeCmp(struct timeStamp TS1 , struct timeStamp TS2){
    if (TS1.hour>TS2.hour)
    {
        return 1;
    }
    if (TS1.hour<TS2.hour)
    {
        return 0;
    }

       if (TS1.minute>TS2.minute)
    {
        return 1;
    }
    if (TS1.minute<TS2.minute)
    {
        return 0;
    }
      
       if (TS1.seconds>TS2.seconds)
    {
        return 1;
    }
    if (TS1.seconds<TS2.seconds)
    {
        return 0;
    }
    
    return 0;

}
int dateCmp(struct timeStamp TS1 , struct timeStamp TS2){
    if (TS1.date>TS2.date)
    {
        return 1;
    }
    if (TS1.date<TS2.date)
    {
        return 0;
    }

       if (TS1.month>TS2.month)
    {
        return 1;
    }
    if (TS1.month<TS2.month)
    {
        return 0;
    }
      
       if (TS1.year>TS2.year)
    {
        return 1;
    }
    if (TS1.year<TS2.year)
    {
        return 0;
    }
    
    return 0;

}
int main(){
struct timeStamp TS1 = {5,45,30 , 2,12,2001};
struct timeStamp TS2 = {4,54,36 , 9,12,2001};
show(TS1 , TS2);
int x = timeCmp(TS1 , TS2);
int y = dateCmp(TS1 , TS2);
printf("Time Comparison Function returns:%d\n" , x);
printf("Date Comparison Function returns:%d\n" , y);
return 0;
}