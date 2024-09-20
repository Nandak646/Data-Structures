#include<stdio.h>
char STR[10],PAT[10],REP[10],ANS[10];
int s,p,r,a,flag;
void read();
void replace();
void display();
void main()
{
read();
replace();
display();
}
void read()
{
printf("Enter the main string:\n");
scanf("%[^\n]s",STR);
printf("Enter a pattern string:\n");
scanf("%s",PAT);
printf("Enter a replace string:\n");
scanf("%s",REP);
}
void replace()
{
s=p=a=0;
while(STR[s]!='\0')
{
if(STR[s]==PAT[p])
{
p++;
s++;
if(PAT[p]=='\0')
{
flag=1;
for(r=0;REP[r]!='\0';r++,a++)
{
ANS[a]=REP[r];
}
p=0;
}
}
else
{
ANS[a]=STR[s];
s++;
a++;
p=0;
}
}
}
void display()
{
if(flag==0)
{
printf("Pattern doesnt match\n");
}
else
{
ANS[a]='\0';
printf("\nThe resultant string is:\n%s",ANS);
}
}


