#include<stdio.h>
struct time
{
    int hrs;
    int min;
    int sec;
};
struct time input()
{
    struct time temp;
    printf("Enter the hours : ");
    scanf("%d",&temp.hrs);
    printf("Enter the minutes : ");
    scanf("%d",&temp.min);
    printf("Enter the seconds : ");
    scanf("%d",&temp.sec);
    return temp;
}
void difference(struct time starttime,
                                 struct time endtime)
{
    struct time diff;
   while (endtime.sec > starttime.sec) {
      --starttime.min;
      starttime.sec += 60;
   }
   diff.sec = starttime.sec - endtime.sec;
   while (endtime.min > starttime.min) {
      --starttime.hrs;
      starttime.min += 60;
   }
   diff.min = starttime.min - endtime.min;
   diff.hrs = starttime.hrs -endtime.hrs;
   printf("= %d:%d:%d\n", diff.hrs,
          diff.min,
          diff.sec);
}
int main()
{
    struct time starttime,endtime;
    printf("Enter the start time \n");
    starttime=input();
    printf("Enter the stop time \n");
    endtime=input();
    printf("The difference between two time periods is \n");
    difference(starttime,endtime);    
}