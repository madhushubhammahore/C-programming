#include<stdio.h>
void Swap(int *a ,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;

}
void main()
{
    int a[]={5,15,18,12,3,1};
    bubblesort(9,6);
    for (int i=0;i<=5;++i)
    printf("%d",a[i]);
}
void bubblesort(int a[],int n)
{
    for (int j=0; j<=n-2;++j)
    for (j=0;j<n-1-j;++j)
     if (a[i]>a[i])
     Swap (&a[i],&a[j]);

}