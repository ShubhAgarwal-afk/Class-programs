// checking quoitent and remainder of number
#include<stdio.h>
int main()
{int a;
int b;
printf("Enter the dividend:");
scanf("%d",&a);
printf("Enter the divisor:");
scanf("%d",&b);
float q;
float r; 
q=a/b;
  printf("Quotient when b is divisor: %f\n",q);
r=a%b;
printf("Remainder when b is divisor: %f\n",r);

return 0;
}
  
  
