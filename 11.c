#include<stdio.h>
int main()
{ printf("Enter your number:");
   int a;
   int Sum=0;
   scanf("%d",&a);
   while(a!=0)
   { int q ;
   q=a%10;
   a=a/10;
   Sum=Sum+q;
   }
   printf("%d",Sum);
   return 0;
   }
   
   