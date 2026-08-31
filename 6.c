// check whether alphabet is vowel and consonent
#include<stdio.h>
int main()
{  char c;
   printf("Enter your Character(in lowercase):");
   scanf("%c",&c);
   if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
   {printf("Your character is vowel");}
   else { printf("your character is Consonent");}
   return 0;}