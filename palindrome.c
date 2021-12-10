//to check if a given number is a palindrome or not
#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, s = 0;  //assignment of values to variables
    
    printf("Enter a number:\t");
    scanf("%d", &a);
    c = a;

   while(a > 0)   //reversing the number in loop 
   {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
   }

   if(s == c)   //veriying if the palindrome by comparing the original declared variables 
   {
      printf("The number %d is a palindrome", c);
   }
   else
   {
      printf("The number %d is not a palindrome", c);
   }
  getch();
}