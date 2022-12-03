#include<stdio.h>
 

int f(int n)
{
    if(n==1)return 1;
    else
    return f(n-1)+n;
}
  void main(){
    int y=f(4);
     printf("%d",y);
}
