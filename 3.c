// finding roots of quadratic equation
#include <stdio.h>
#include <math.h>
 int main()
 {float a;
 float b;
 float c;
 printf("Enter the X sqaured coffiecient:");
 scanf("%f",&a);
 printf("Enter the X coffiecient:");
 scanf("%f",&b);
 printf("Enter the constant:");
 scanf("%f",&c);
 float Answer ;
 Answer=(-b+sqrt(b*b-4*a*c));
 Answer=Answer/(2*a);
 float answer;
 answer=(-b-sqrt(b*b-4*a*c))/(2*a);
 printf("First root = %f\n",Answer);
 printf("second root = %f\n",answer);
 return 0;
 }