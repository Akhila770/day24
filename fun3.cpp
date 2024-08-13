//Write a C program to find maximum and minimum between two numbers using functions.
#include<stdio.h>

int maximum(int n1,int n2)
{
	return (n1>n2)?n1:n2;
}

int minimum(int n1,int n2)
{
	return (n1>n2)?n2:n1;
}

int main()
{
	int n1,n2,max,min;
	printf("enter number 1:");
	scanf("%d",&n1);
	printf("enter number 1:");
	scanf("%d",&n2);
	max=maximum(n1,n2);
	min=minimum(n1,n2);
	printf("maximum number:%d\n",max);
	printf("minimum number:%d",min);
}
