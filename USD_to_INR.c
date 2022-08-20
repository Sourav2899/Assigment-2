/* Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD */

#include<stdio.h>
int main()
{   
    float x,INR=76.23;
    printf("Enter money ");
    scanf("%f",&x);
     x=x/INR;
     printf("%f USD",x);
}