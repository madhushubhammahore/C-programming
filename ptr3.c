#include<stdio.h>
  void f(int x,int*y,int **z)
  {

x++;(*y)++;(**z)++;
  }
  void main(){
    int i=10,*P,**p1;
    p=&i;
    p1=&p;

    f(i,p,p1);
    printf("%d",i);

  
  
    return 0;

    }    
    