#include<cstdio>
#include<cstring>
int t;
int a[15];

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        int i;
        int z[15],y[15];
        memset(z,0,sizeof(z));
        memset(y,0,sizeof(y));
        for( i=0;i<10;i++)
            scanf("%d",&a[i]);

            z[0]=a[0];int f=1;
            int t=0;int tt=0;
            for(int i=1;i<10;i++)
            {
                if(a[i]>z[t])
                {
                    z[++t]=a[i];
                    f++;
                }
                else if(a[i]>y[tt])
                    {
                        y[++tt]=a[i];
                        f++;
                    }
            }
           // printf("%d!",f);
        if(f==10)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}