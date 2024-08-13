//Write a C program to find power of any number using recursion

#include<stdio.h>
int power(int base,int p);
int main()
{
	int p,base,res;
	printf("enter base: ");
	scanf("%d",&base);
	printf("enter power: ");
	scanf("%d",&p);
	res=power(base,p);
	printf("%d",res);
}

int power(int base,int p)
{
	if(p==0)
	 return 1;
    else
     return base*power(base,p-1); 
}
