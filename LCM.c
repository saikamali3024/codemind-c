#include<stdio.h>
int main()
{
    int n,m,l;
    scanf("%d%d",&n,&m);
    l=(n>m)?m:n;
    while(l)
    {
        if(l%n==0&&l%m==0)
        {
        printf("%d",l);
        break;
        }
        l++;
    }
}