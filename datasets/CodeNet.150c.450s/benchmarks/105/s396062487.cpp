#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<vector>
#include<map>
using namespace std;
typedef long long ll;
#define N 300006
int T,n;
ll a[N],s[N];
char ch[N];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
        scanf("%s",ch+1);if(ch[n]=='1'){puts("1");continue;}
        for(int j=0;j<=62;j++)s[j]=0;bool flag=true;
        for(int i=n;i;i--)
        {
            if(ch[i]=='0')
            {
                ll x=a[i];
                for(int j=62;~j;j--)if(x&(1ll<<j))
                {
                    if(!s[j]){s[j]=x;break;}
                    else x^=s[j];
                }
            }
            else
            {
                ll x=a[i];bool tf=false;
                for(int j=62;~j;j--)if(x&(1ll<<j))
                {
                    if(!s[j]){s[j]=x;tf=true;break;}
                    else x^=s[j];
                }
                if(tf){flag=false;break;}
            }
        }
        if(!flag)puts("1");
        else puts("0");
    }
}
