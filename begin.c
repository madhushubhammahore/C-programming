 #include<stdio.h>
  // create a structure to store vectors. then make a function to return sum of 2 vetors.
  struct vector{
    int x;
    int y;

  };
  void calsum(struct vector v1, struct vector v2, struct vector sum);


  int main(){
    struct vector v1={5,10};
    struct vector v2={3,7};
    struct vector v3={0};
    
    calcsum(v1,v2,sum);
    

    return 0;

  }
  void calcsum (struct vector v1, struct vector v2, struct vector  v3);
  sum.x=v1.x+ v2.x;
  sum.y=v1.y+v2.y;


  printf ("sum of x is :%d",sum.x);
  printf("sum of y is: %d",sum.y);

  

     
     
     