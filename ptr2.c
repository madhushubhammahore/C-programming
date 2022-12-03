#include<stdio.h>

int main(){
    int a[]={10,20,30,40,50};
    int*ptr1,*ptr2;

    ptr1=a;
    ptr2=ptr1+2;
    printf("%d",ptr2-ptr1);

    return 0;
}