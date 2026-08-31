/*#include<stdio.h>
#include<math.h>
int main()
{int a;
int sum =0;
printf("Enter your number:");
scanf("%d",&a);
int i=1;
while(a/(pow(10,i)<0))
{i++;}
int c;
double d;
for(c=1;c<=i;c--)
{ d = a% pow(10,c);
sum=sum+pow(d,i);
a=a-d;
a=a/10;

  }
printf("Your armstrong value for entered number:%d",sum);
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{int N;
	printf("Enter your number:");
	scanf("%d",&N);
int t =N;
	int c =0;
	while(t!=0)
	{ c++;
t=t/10;
	}
 t=N;
	int sum=0;
	while(t!=0)
	{int rem;
rem=t%10;
sum=sum+pow(rem,c);
t=t/10;
	}
	if (sum==N)
	{printf("Your number is armstrong number:");}
else
{printf("Your number is not armstrong");}
return 0;
}

	
