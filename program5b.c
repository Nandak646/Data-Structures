#include<stdio.h>
void towers(int,char,char,char);
void main()
{
	int num;
	printf("enter the number of disks:\n");
	scanf("%d",&num);
	printf("the sequence of moves involved in tower of hanoi are:\n");
	towers(num,'A','B','C');
}
void towers(int n, char source, char temp, char dest)
{
if (n==1)
	{
		printf("\n move disk 1 form peg %c to peg %c",source, dest);
		return;
	}
	towers(n-1,source,dest,temp);
	printf("\n move disk %d from peg %c to peg %c ", n, source, dest);
	towers(n-1, temp, source, dest);
}
