//Write a C program to find all prime numbers between given interval using functions.


#include<stdio.h>
int prime();
int main()
{
	int result;
	result=prime();
	printf("prime numbers between a range :%d",result);
}

int prime()
{   
    int num1,num2;
	printf("enter staring number:");
	scanf("%d",&num1);
	printf("enter ending number:");
	scanf("%d",&num2);
    int i,j,c,count=0;
	for(i=num1;i<=num2;i++)
	{  
	    c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			count=count+1;
			printf("prime number:%d\n",i);
		}
	}
	return count;
}
