#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;
int a[100];
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m),(n+m))
    {
        memset(a,0,sizeof(a));
        int ans=m,k=0,flag=0;
        while(1)
        {
            for(int i=0; i<n; i++)
            {
                if(ans>0)
                {
                    ans--;
                    a[i]++;
                }
                else
                {
                    if(a[i]>0)
                    {
                        ans=a[i];
                        a[i]=0;
                    }
                }
                if(a[i]==m)
                {
                    k=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        printf("%d\n",k);
    }
    return 0;
}

