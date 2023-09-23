#include<stdio.h>
int l;
int ans=0;

int main()
{
    while(scanf("%d",&l)!=-1)
    {
        ans=0;
        for(int i=0;i*l<600;i++)
        {
            ans=ans+i*l*i*l*l;
        }
        printf("%d\n",ans);
    }
    return 0;
}