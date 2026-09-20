#include<stdio.h>
void IsEOO(int a);
//void IsPrime(int a);
int SUMOFDIGITS(int a);
void main()
{int a;
printf("Enter your number:");
scanf("%d",&a);
IsEOO(a);
SUMOFDIGITS(a);



}
void ISEOO(int i)
{ if(i%2==0)
    {printf("Your number is even");
	} 
  else
    {printf("Your number is odd");
	}
}

int SUMOFDIGITS(int i)
{int a=i;
int sum=0;
while(a!=0)
{   int r=a%10;
sum=sum+r;
a=a/10;
}
return sum;
}