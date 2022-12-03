#include<stdio.h>
void display(int n){

    if (n==0)return;
    else
    {
        display (n-1);
        printf("%d",n);

    }
}


 void main(){

display(4);

}


