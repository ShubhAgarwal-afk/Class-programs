#include<stdio.h>
int main()

{
int a;
printf("enter terms of fibonaaci you want to insert:");
scanf("%d",&a);
int d=0;
printf("%d\n",d);
int e =1;
printf("%d\n",e);
for(int j=0;j<=a;j++)
{e=e+d;
printf("%d\n",e);
d=e-d;}
return 0;
}