#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define FORR(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define CHMIN(a,b) (a) = min((a),(b))
#define CHMAX(a,b) (a) = max((a),(b))

int main()
{
    int n,m;
    int tar[105];
    int han[105];
    int tarsum,hansum,xxsa,x,y,wa;
    while(1==1)
    {
        n=10000;
        m=10000;
        REP(i,105)
        {
            tar[i]=10000;
            han[i]=20000;
        }
        tarsum=0;
        hansum=0;
        xxsa=0;
        x=10000;
        y=20000;
        wa=10000;
        scanf("%d %d\n",&n,&m);
        if(n==0&&m==0)return 0;
        REP(i,n)
        {
            scanf("%d\n",&tar[i]);
            tarsum+=tar[i];
        }
        REP(i,m)
        {
            scanf("%d\n",&han[i]);
            hansum+=han[i];
        }
        xxsa=tarsum-hansum;
        REP(i,n)
        {
            REP(j,m)
            {
                if((tar[i]-han[j])*2==xxsa)
                {
                    if(tar[i]+han[j]<wa)
                    {
                        x=tar[i];
                        y=han[j];
                        wa=x+y;
                    }
                }
            }
        }
        if(wa==10000)
        {
            printf("-1\n");
        }
        else printf("%d %d\n",x,y);
    }
    return 0;
}
