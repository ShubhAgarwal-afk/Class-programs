#include<stdio.h>
int main()
{int N;
printf("Enter your number:");
scanf("%d",&N);
int t=N;
int r=0;
while(t!=0)
{ r=t%10;
r=r*10+r;
t=t/10;}
printf("The palindrome:%d",r);
return 0;
}