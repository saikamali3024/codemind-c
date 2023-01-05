#include<stdio.h>
void cube(float a)
{
    float sa,vol;
    sa=6*a*a;
    vol=a*a*a;
    printf("Surface area = %0.f and Volume = %0.f",sa,vol);
}
int main()
{
    float a;
    scanf("%f",&a);
    cube(a);
}