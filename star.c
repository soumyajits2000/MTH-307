#include <stdio.h>

int upstar(int n)
{
    int i,j;
    for (j=1;j<=n;j++)
    {
        for (i=1;i<=j;i++)
    {
        printf("*");
    }
    printf("\n");
    }
    
}

int downstar(int n)
{
    int a,b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


int main()
{
    int n;
    printf("Enter the size of the star pyramid:");
    scanf("%d",&n);
    upstar (n);
    downstar(n);
    return 0;
}