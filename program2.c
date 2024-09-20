#include<stdio.h>
struct student
{
int roll_no;
char name[10];
};
void main()
{
int i,n;
struct student s1[10];
for(i=0;i<n;i++)
{
printf("Enter the roll_no:");
scanf("%d",&s1[i].roll_no);
printf("Enter the name:");
scanf("%s",s1[i].name);
}
for(i=0;i<n;i++)
{
printf("USN:");
printf("%d",s1[i].roll_no);
printf("Name:");
printf("%s",s1[i].name);
}
}

