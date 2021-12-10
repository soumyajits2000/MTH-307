//from geeks for geeks
#include <stdio.h>

typedef struct point    //here we are defining point as a datatype
{
    int x,y;
}point;

int main()
{
    point p1={5,8};      //here define the dataype first and then a variable of that datatype and keep those variables in curly braces
    printf("x is %d and y is %d",p1.x,p1.y);    
    return 0;
}