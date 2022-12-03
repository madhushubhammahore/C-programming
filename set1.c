 #include<stdio.h>

/* int a=300,b=2029;
 
 
 if (b>=a)
 { 
      printf("Bingo! you are in");
 }
  else
 {
      printf("OOPS! you are out");

}   */
int main() {
  int a=5,b=3;
  int incr;

  incr=(a<b)&& (b++);
  printf("%d\n",incr);
  printf("%d",b);
  return 0;
 
}



 