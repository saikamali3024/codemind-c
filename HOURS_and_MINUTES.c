#include<stdio.h>
void total(int x)
{
    int h,s;
    h=x/60;
    s=x%60;
    printf("%d Hour(s) %d Minute(s)",h,s);
}
int main()
{
    int x;
    scanf("%d",&x);
    total(x);
}