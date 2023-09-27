#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define int long long
using namespace std;

//-----------------------------------------------------------------------

int N,Q;
int bit[100010];

void add(int k,int w)
{
    for(int x=k;x<=N;x+=x&-x) bit[x]+=w;
}

int getSum(int k)
{
    int ret=0;
    for(int x=k;x>0;x-=x&-x) ret+=bit[x];
    return ret;
}

signed main()
{
    cin>>N>>Q;
    while(Q--)
    {
        int type,x,y; cin>>type>>x>>y;
        if(type==0)
            add(x,y);
        else
            cout<<getSum(y)-getSum(x-1)<<endl;
    }
}

