#include<iostream>
using namespace std;
int main(){
    int num,reverse=0,rem;
    cout<<"enter a number: ";
    //user input
    cin>>num;

    do{


rem=num%10;
reverse=reverse*10+rem;
num/=10;
    }
    while(num!=0);
    //output
    cout<<"Reversed Number:"<<reverse;
    return 0;
    }
