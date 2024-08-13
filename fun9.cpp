//Write a C program to print all perfect numbers between given interval using functions

#include<stdio.h>

int perfect(int num1,int num2);
int main()
{    
    int num1,num2,res;
    printf("enter a num1:");
	scanf("%d",&num1);
	printf("enter a num2:");
	scanf("%d",&num2);
	res=perfect(num1,num2);	
	printf("count:%d",res);
}

int perfect(int num1,int num2)
{
	int i,j,c=0;
	for(i=num1;i<=num2;i++)
	{
		int sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
			   sum=sum+j;	
			}
		}
		if(sum==i)
		{
			printf("%d\n",i);
			c=c+1;
		}
	}
	return c;
}
