//WAP to find the sum of two fractions.

#include<stdio.h>
typedef struct
{
int num,den;
}Frctn;
Frctn input()
{
Frctn uu;
printf ("Enter numerator-\n");
scanf ("%d",&uu.num);
printf ("Enter denominator-\n");
scanf ("%d",&uu.den);
return uu;
};
int gcd_of_fractions(int d1,int d2)
{
int i,g1=1;
for(i=2;i<=d1 && i<=d2;i++)
{
if(d1%i==0 && d2%i==0)
g1=i;
}
return g1;
}
Frctn sum(Frctn frc1,Frctn frc2)
{
int c;
Frctn add_frctns;
add_frctns.num=((frc1.num*frc2.den)+(frc2.num*frc1.den));
add_frctns.den=frc1.den*frc2.den;c=gcd_of_fractions(add_frctns.num,add_frctns.den);
add_frctns.num=add_frctns.num/c;
add_frctns.den=add_frctns.den/c;
return add_frctns;
}
void print(Frctn f1,Frctn f2,Frctn n)
{
printf("Sum of fraction %d/%d+%d/%d=%d/%d",f1.num,f1.den,f2.num,f2.den,n.num,n.den);
}
int main()
{
Frctn frc1=input();
Frctn frc2=input();
int gcd_of_fractions(int d1,int d2);
Frctn n=sum(frc1,frc2);
print(frc1,frc2,n);
return 0;
}
