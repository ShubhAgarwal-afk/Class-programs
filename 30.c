#include<stdio.h>
int factorial(int n)
int fibonacii(int q) 
void main()
{int a;
printf("Enter the number of which factorial needed:");
scanf("%d",&a);
int f;
printf("Enter the number of fibonacci term :");
scanf("%d",&f);
printf("The factorial the number %d is:%d",a,factorial(a));
printf("The  the %dth fibonacci number is:%d",f,fibonacii(f));
}
int factorial(int i)
  { if(i<=1)
       {return 1;
	   }
	else
	  { return i*factorial(i-1);
	  }
  }
int fibonacci(int q)
    {if(q==0)
		{ return 0;
		}
     else
	 {return fibonacci(i)+fibonacci(i-1);
	 }
	}
	  
      