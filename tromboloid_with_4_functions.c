//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
  float x;
  scanf("%f"&x);
  return x;
}
float formulae_trom(float h ,float b , float d)
{
  return ((h*b*d)+(d/b))/3;
}

void print(float vol)
{
  printf("volume of tromboloid is =%f ",vol);
}
  
int main()
{
  printf("enter b ");
  float h=input();
  printf("enter b");
  float b=input();
  printf("enter d");
  float d=input();
  float vol=formulae_trom(h,b,d);
  print(vol);
  return 0;
}  
