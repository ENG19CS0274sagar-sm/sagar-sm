//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
 float x;
 scanf("%f",&x);
return x;
}
float formulae_distance( float x1, float y1, float x2 ,float y2)
{
return (sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
}
void print(float dist )
{  
 printf("distance between two points is =%f",dist);
}
int main()
{
 printf("enter x1");
 float x1=input();  
 printf("enter y1");
 float y1=input();
 printf("enter x2");
 float x2=input();
 printf("enter y2");
 float y2=input();  
 float dist=formulae_distance(x1,y1,x2,y2);
 print(dist);
return 0;
}  
  
 
  
  

