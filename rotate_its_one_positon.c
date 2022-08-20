/* Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right */

#include<stdio.h>
int main()
{
    int n, x,y,z ;
    printf("Enter Three Digit Number");
    scanf("%d",&n);
    x=n%10;
    y=n/100;
    z=(n/10)%10;

    n=(x*10+y)*10+z;
    printf("%d",n);
    return 0;
}