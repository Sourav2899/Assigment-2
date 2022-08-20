#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Number and get whole number without last digit of a  number");
    scanf("%d",&x);
    y=x/10;
    printf("%d",y);
    return(0);
}