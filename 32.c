#include<stdio.h>
int* Sum(int a,int b);
void main()
{
	int a; 
int b;
printf("Enter the value of First number:");
scanf("%d",&a);
printf("Enter the value of First number:");
scanf("%d",&b);
printf("Your address is:%p\n",Sum(a,b));
printf("Your sum is:%d\n",*Sum(a,b));

 }
int* Sum(int a,int b)
{ static int result;
  result=a+b;
  return &result;
   }

