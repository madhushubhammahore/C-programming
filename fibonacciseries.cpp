#include<iostream>
using namespace std;
int main(){

int num=15;
int a=0,b=1;
cout<<a<<","<<b<<",";

int nextterm;
for (int i=2;i<num; i++){
    nextterm=a+b;
    a=b;
    b=nextterm;
    cout<<nextterm<<",";

}
return 0;




}