#include <stdio.h>

int main ()
{
   char yourname[100];
   int yourage;

   printf("Whats your name?\t");
   scanf("%s",yourname); //i let you read the doc to avoid overflow :)
   printf("How old are you?\t");
   scanf("%d",&yourage);
   printf("You are %d years old and your name is %s \n\n\n",yourage,yourname);
   system("pause");
   return(0);
}