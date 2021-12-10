#include <stdio.h>
int main()
{
    char* arr[]={"first","second","third","fourth"};
    int i;
    int length;
    length=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<length;i++)
    {
        printf("\n%s",arr[i]);
    }
    return 0;
}