//Write a program to add two user input numbers using one function.


#include<stdio.h>
int main()
{
 int x,y,z;
 
  printf("enter the number 1");
  scanf("%d", &x);
  printf("enter number 2") ;
  scanf("%d",&y);

  z =x+y;
 printf("sum of %d and %d is =%d", x,y,z);
 return 0;
}

