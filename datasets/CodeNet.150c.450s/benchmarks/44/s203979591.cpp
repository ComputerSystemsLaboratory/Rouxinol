#include<stdio.h>
int a[4]={0};
int b[4]={0};
int hit=0,blow=0;

int main()
{
    while(scanf("%d",&a[0])!=-1)
    {
        for(int i=1;i<4;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<4;i++)
        {
            scanf("%d",&b[i]);
        }
        for(int i=0;i<4;i++)
        {
            if(a[i]==b[i])
            {
                hit++;
                a[i]=10;
                b[i]=10;
            }
        }
        for(int i=0;i<4;i++)
        {
            if(b[i]!=10)
            {
                for(int j=0;j<4;j++)
                {
                    if(b[i]==a[j])
                    {
                        blow++;
                    }
                }
            }
        }
        printf("%d %d\n",hit,blow);
        for(int i=0;i<4;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        hit=0;
        blow=0;
    }
    return 0;
}