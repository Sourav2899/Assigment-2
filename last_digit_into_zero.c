/*    Write a program to make the last digit of a number stored in a variable as zero. 
      (Example - if x=2345 then make it x=2340)    */

#include<stdio.h>
int main()
{
    int x,l;
    printf("User Please Enter a Number");
    scanf("%d",&x);
    l=x%10;
    x=x-l;
    printf("x=%d",x);
    return 0;
}
