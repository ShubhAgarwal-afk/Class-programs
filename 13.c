// printing pattern of star in triangular pattern
#include<stdio.h>
int main()
{int a;
//int b;
int i;
int j;
printf("Enter the number of rows:");
 scanf("%d",&a);
 //printf("Enter the number of columns:");
 //scanf("%d"&,a);
for(i=0;i<a;i++)
{ for(j=0;j<=i;j++)
	{printf("*");}
printf("\n");
}



return 0;
}