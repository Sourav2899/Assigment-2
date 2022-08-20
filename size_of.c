// WAP to print size of an int , a float ,a char and a double type variable.

#include<stdio.h>
int main()
{ int x,y,z,l;
  x=sizeof(int);
  printf("size of int=%d \n",x);
  
  y=sizeof(char);
  printf("size of char=%d \n",y);
  
  z=sizeof(float);
  printf("size of float=%d \n",z);

  l=sizeof(double);
  printf("size of double=%d",l);
  return 0;
}