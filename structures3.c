#include <stdio.h>
typedef struct point
{
    int x,y;
}point;
int main()
{
    point p1={1,2};
    point *p2=&p1;
    printf("%d %d", p2->x,p2->y);
    return 0;
}