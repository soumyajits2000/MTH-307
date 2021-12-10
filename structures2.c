// geeks for geeks --- designated initialization
#include <stdio.h>
typedef struct point
{
    int x,y,z;
}point;

int main()
{
    point p1={.y=10, .z=19,.x=5};
    point p2={.y=80, .z=-789,.x=-5};
    printf("value in P1 for x is %d for y is %d and for z is %d \n", p1.x, p1.y, p1.z);
    printf("value in P2 for x is %d for y is %d and for z is %d", p2.x, p2.y, p2.z);    
    return 0;
}