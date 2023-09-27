#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define int long long
using namespace std;

//-----------------------------------------------------------------------

int N,Q;
int bit[100010];

void add(int k,int x)
{   
    for(;k<=N;k+=k&-k) bit[k]+=x;
}
int getSum(int k)
{   
    int ret=0;
    for(;k>0;k-=k&-k) ret+=bit[k];
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

