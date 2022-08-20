#include<stdio.h>
int main()
{
    int n,f,m,l,s;
    printf("Enter 3 Digit No");
    scanf ("%d",&n);
    
    f=n/100;
    m=(n%100)/10;
    l=n%10;
    s=f+m+l;

    printf("f=%d \n m=%d \n l=%d",f,m,l);
    printf("\n sum of no=%d",s);
}