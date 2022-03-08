#include<stdio.h>

struct _fraction
{
  int num,den;
}

typedef _fraction Fraction

Fraction input_fraction()
{
  Fraction x,y;
  printf("Enter the numerator and denominator of the fraction: \n");
  scanf("%d %d",&x.num,&y.den); 
  return Fraction;
}

Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int common_denominator=f1.den*f2.den*f3.den;
  int num1=f1.num 
}