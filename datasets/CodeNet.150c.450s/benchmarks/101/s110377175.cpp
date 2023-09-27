#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <math.h>
#include<cstring>
#include <cstdio>
using namespace std;
typedef long long int ll;
#define rep(i, a, n) for (ll i = a; i < (ll)(n); i++)
long long GCD(long long a, long long b) { return b ? GCD(b, a%b) : a; }
long long LCM(long long a, long long b)  {return a/GCD(a,b)*b;}
int n,m,q;
int st,en;
vector<int> G[100000];
int color[100000];
int cnt=0;
void dfs(int st,int cnt)
{
    color[st]=cnt;
    for(int i=0;i<G[st].size();i++)
    {
        if(color[G[st][i]]==-1)
        {
            dfs(G[st][i],cnt);
        }
    }
}
void makeColor()
{
    for(int i=0;i<n;i++)
    {
        if(color[i]==-1)
        {
            dfs(i,++cnt);
        }
    }
}
int main(){
    memset(color,-1,sizeof(color));
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    makeColor();
    cin>>q;
    
    for(int i=0;i<q;i++)
    {
        cin>>st>>en;
        if(color[st]==color[en])
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
   return 0;
}

