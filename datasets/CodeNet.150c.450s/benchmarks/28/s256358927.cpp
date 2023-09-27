#include<stdio.h>
const int t=100005;
int a[t];
int n,m;
bool Find(int x)
{
    int sum=0;
    int fuck=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum>x)
        {
            ++fuck;
            sum=a[i];
            if(sum>x)
            {
                return 0;
            }
        }
    }
    return fuck<m;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=1,r=t*10000;
    while(l<=r)
    {
        int mid=l+r>>1;
        if(Find(mid))
        {
            r=mid-1;
        }
        else
            l=mid+1;
    }
    printf("%d\n",l);
}