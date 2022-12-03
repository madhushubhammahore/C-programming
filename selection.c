//pointers
#include<stdio.h>
//int*ptr=&age;
 
    
    //declaring pointer
    //int*ptr;
    //char*ptr;
    //float*ptr;
    //next thing is format specifier
    //printf("%p",&age);
    //printf("%p",ptr);
    //printf("%p",&ptr);

    int main(){
    int age=22;
    int *ptr=&age;
    // we learn printing of address
   printf("%p",&age);
   printf("%u\n",&age); 
   printf("%u\n",ptr);


     
     
    return 0;

}

