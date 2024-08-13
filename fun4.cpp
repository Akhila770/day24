//Write a C program to check whether a number is even or odd using functions
#include<stdio.h>
int function(int num);
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	function(num);
}

int function(int num)
{   
    int res;
	if(num%2==0)
	 { printf("even number"); }
	else
	{  printf("odd number"); }
}

