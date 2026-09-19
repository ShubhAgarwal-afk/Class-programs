/*Experiment 3: Menu-Driven Program Using User-Defined Functions
Write a menu-driven C program using user-defined functions to perform the following operations on an integer:
1.	Check whether the number is even or odd 
2. 	Check whether the number is prime 
3.	Check whether the number is a palindrome 
4.	Find the sum of digits 
5.	Reverse the number 
6.	Exit 
Each operation must be implemented using a separate function.*/
#include<stdio.h>
int findmaximun();
int findminimun();
int calculateSum();
int calculateAverage();




void main()
{int a;
printf("Enter the size of array:");
scanf("%d",&a);
int arr[a];
printf("Enter elements of array:");
for(int i=0;i<a;i++)
   { scanf("%d",&arr[i]
   }
 printf("your value of maximun value:%d\n",findmaximun(arr,a));
 printf("Your minimun value:%d\n",findminimun(arr,a));
printf("Your sum of elements:%d\n",calculateSum(arr,a));
printf("Your average of elements:%d\n",calculateAverage(arr,a));
}

int findmaximun(int arr[],int a)
{int max;
for(int i=0,max=arr[i];i<a;i++)
   {if(arr[i]>max)
      {max=arr[i];
	  }
	}
	return max;
	}



int findminimun(int arr[],int a)
{int min;
for(int i=0,min=arr[i];i<a;i++)
   {if(arr[i]<min)
      {min=arr[i];
	  }
	}
	return min;
	}


int calculateSum(int arr[],int a)
{int sum=0;
for(int i=0;i<a;i++)
   {sum=sum+arr[i];
	  }
	return sum;
}

int calculateAverage(int arr[],int a);
{int sum=0;
for(int i=0;i<a;i++)
   {sum=sum+arr[i];
	  }
	return (float)sum/a;
	
	