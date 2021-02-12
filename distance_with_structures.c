//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
struct Input_1
{
    float x,y;
};
float inputx()
{
    float x;
    scanf("%f",&x);
    return x;
}
float inputy()
{
    float y;
    scanf("%f",&y);
    return y;
}
float calculation(float x1,float x2,float y1, float y2)
{ 
    return(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
}
void print(float distance)
{
    printf("The distance is = %f",distance);  
}
int main()
{   
    struct Input_1 I1,I2;
    printf("enter cordinate x1 ");
    I1.x=inputx();
    printf("enter cordinate y1 ");
    I1.y=inputy();
    printf("enter cordinate x2 ");
    I2.x=inputx();
    printf("enter cordinate  y2 ");
    I2.y=inputy();
    float distance=calculation(I1.x,I1.y,I2.x,I2.y);
    print(distance);
    return 0;
}
