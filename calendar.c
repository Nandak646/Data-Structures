#include<stdio.h>
#include<stdlib.h>
struct Day
{
char *dayName;
int date;
char *activity;
};
struct Day* createCalendar();
void readCalendar(struct Day *calendar);
void displayCalendar(struct Day *calendar);
void freeCalendar(struct Day *calendar);
int main()
{
struct Day *calendar=createCalendar();
readCalendar(calendar);
displayCalendar(calendar);
freeCalendar(calendar);
return 0;
}
struct Day* createCalendar()
{
return (struct Day*)malloc(7*sizeof(struct Day));
}
void readCalendar(struct Day *calendar)
{
for(int i=0;i<7;i++)
{
printf("Enter name of Day %d:",i+1);
scanf("%ms",&calendar[i].dayName);
printf("Enter date for %s:",calendar[i].dayName);
scanf("%d",&calendar[i].date);
printf("Enter activity for %s:",calendar[i].dayName);
scanf("%ms",&calendar[i].activity);
}
}
void displayCalendar(struct Day *calendar)
{
printf("\nWeek's Activity Report:\n");
for(int i=0;i<7;i++)
{
printf("Day:%s,Date:%d,Activity:%s\n",calendar[i].dayName,calendar[i].date,calendar[i].activity);
}
}
void freeCalendar(struct Day *calendar)
{
for(int i=0;i<7;i++)
{
free(calendar[i].dayName);
free(calendar[i].activity);
}
free(calendar);
}
