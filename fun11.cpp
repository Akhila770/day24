//Write a C program to print all natural numbers between 1 to n using recursion.

#include<stdio.h>
int natural(int n);
int main()
{
	int n,res;
	printf("enter a number:");
	scanf("%d",&n);
	res=natural(n);
}

int natural(int n)
{
	//int i=1;
	if(n==0)
	  return 0;
	else
	  natural(n-1);
	printf("%d\n",n);
}

