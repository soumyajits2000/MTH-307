#include<stdio.h>

main()
{
int marks;
printf("enter marks:");
scanf("%d",&marks);
switch(marks>60)
{
    case 1: {
        printf("first class\n");
        break;
        
    }
    case 0: {
            printf("second class\n");
    }
}
printf("I am out of switch now\n");
}