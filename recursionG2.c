#include<stdio.h>
void f(int n)
{
    if (n==1)
    printf ("%d",n);
    else
    {
        printf("%d",n);
        f(n-1),
        printf("%d",n);
    }
}
