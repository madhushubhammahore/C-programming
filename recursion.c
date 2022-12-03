#include<stdio.h>
int f(int n)
{
    if (n==1||n==2)return 1;
    else
       return f(n-1)+f(n-2);
}
void main(){
    int y=f(5);
    printf("%d",y);
}
