#include<stdio.h>

int main(){
int a[]={10,20,30,40,50};
int*ptr;
ptr=a;
ptr=ptr+2;
printf("%d",*ptr);
ptr=ptr-1;
printf("%d",*ptr);


return 0;
}
