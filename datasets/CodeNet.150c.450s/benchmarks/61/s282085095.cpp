#include<stdio.h>
#include<iostream>
#include<utility>
#include<string.h>
#include<queue>
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
    int n,a,b,c,x;
    int y[105]={};
    int ran[10005]={};
    while(1==1)
    {
        scanf("%d %d %d %d %d\n",&n,&a,&b,&c,&x);
        if(n==0&& a==0&&b==0&&c==0&&x==0)return 0;
        REP(i,105)y[i]=-1;
        REP(i,n)scanf("%d",&y[i]);
        ran[0]=x;
        REP(i,10004)ran[i+1]=(ran[i]*a+b)%c;
        int poi=0;
        int ypo=0;
        while(poi<=10000)
        {
            if(y[ypo]==ran[poi])
            {
                ypo++;
            }
            if(ypo==n)break;
            poi++;
        }
        if(ypo!=n)printf("-1\n");
        else printf("%d\n",poi);
    }
    return 0;
}
