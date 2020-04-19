#include<stdio.h>
#include<math.h>
simpleInterest()
{
	float p,r,t,si;
	printf("Enter Principal ,rate and time");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("Simple Interest is %f",si);
}
compoundInterest()
{
	float p,r,t,ci;
	printf("\nEnter Principal , rate and time");
	scanf("%f%f%f",&p,&r,&t);
	ci=p*(pow((1+r/100),t));
	printf("\nCompound Interest is %f",ci);
}
int main()
{
	simpleInterest();
	compoundInterest();
}
