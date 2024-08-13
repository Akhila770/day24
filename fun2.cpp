//Write a C program to find diameter, circumference and area of circle using functions
#include<stdio.h>
float diameter_fun(float radius);
float circumference_fun(float radius);
float area_fun(float radius);
int main()
{
	float radius,result1,result2,result3;
	printf("enter radius of the circle:");
	scanf("%f",&radius);
	result1=diameter_fun(radius);
	printf("diamter:%f\n",result1);
	
	result2=circumference_fun(radius);
	printf("circumferenc:%f\n",result2);
	
	result3=area_fun(radius);
	printf("area:%f\n",result3);
}
float diameter_fun(float radius)
{
	float diameter;
	diameter=radius * 2;
	return diameter;
}
float circumference_fun(float radius)
{
	float circumference;
	circumference=2*3.14*radius;    //2*pi *r
	return circumference;
}
float area_fun(float radius)
{
	float area;
	area=3.14*radius*radius;          //pi * r^2
	return area;
}
