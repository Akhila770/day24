//Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

#include<stdio.h>
#include<math.h>
int prime(int num);
int armstrong(int num);
int perfect(int num);

int main()
{   
    int num;
	printf("enter number:");
	scanf("%d",&num);
	prime(num);
	armstrong(num);
	perfect(num);
}

int prime(int num)
{ 
    int i,c;
    c=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		printf("prime number.\n");
	}
	else
	{
		printf("not prime number.\n");
	}
}

int armstrong(int num)
{
	int rem1,rem2,power,total=0;
	int len=0;
    int temp1=num;
	int temp2=num;
	while(num!=0)
	{
		rem1=num%10;
		len=len+1;
		num=num/10;
	}
	while(temp1!=0)
	{
		rem2=temp1%10;
		power=pow(rem2,len);
		total=total+power;
		temp1=temp1/10;
	}
	if(total==temp2)
	{
		printf("armstrong number\n");
	}
	else
	{
		printf("not armstrong number\n");
	}
}

int perfect(int num)
{
	int i,fact,result,sum=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("perfect number\n");
	}
	else
	{
		printf("not perfect number");
	}
}

