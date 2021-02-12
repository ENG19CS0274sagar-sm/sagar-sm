//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
struct Input_1
{
    double x,y;
};
double inputx()
{
    double x;
    scanf("%lf",&x);
    return x;
}
double inputy()
{
    double y;
    scanf("%lf",&y);
    return y;
}
double calculation(double x1,double x2,double y1, double y2)
{ 
    return(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
}
void print(double distance)
{
    printf("The distance is:%lf",distance);  
}
int main()
{   
    struct Input_1 I1,I2;
    printf("enter x1 ");
    I1.x=inputx();
    printf("enter y1 ");
    I1.y=inputy();
    printf("enter x2 ");
    I2.x=inputx();
    printf("enter y2 ");
    I2.y=inputy();
    double distance=calculation(I1.x,I1.y,I2.x,I2.y);
    print(distance);
    return 0;
}
