#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int ni,r,q,s=0;
        scanf("%d",&ni);
        q=ni;
        while(q!=0)
        {
            r=q%10;
            q=q/10;
            s=s*10+r;
        }
        if(s==ni)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}