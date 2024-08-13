//Write a C program to find cube of any number using function.

#include<stdio.h>
#include<math.h>
int cube(int n)
{
	int c,result;
	printf("enter a number:");
	scanf("%d",&n);
	result=pow(n,3);
	return result;
}
int main()
{
	int res,n;
	
	res=cube(n);
	printf("output  is %d  ",res);
}
