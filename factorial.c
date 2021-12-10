//Finding the factorial of a number by recursion

#include <stdio.h>

int fact(int); //declaring functions
int main()
{
    int m, n;  //declaring variables
    printf("Your Number:");
    scanf("%d", &n); //taking input for values
    

    m = fact(n);
    printf("Factorial of %d is %d", n, m);

    return 0;
}

int fact(int n)
{
    if (n == 0)
        return (1);
    return (n * fact(n - 1));
}