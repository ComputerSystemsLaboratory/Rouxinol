#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
map<int,int> mi;
void bfs(list<int> v[],ll n,ll s)
{
    vector<bool> visi(n+1,false);
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        visi[s]=true;
        list<int>::iterator it;
        for(it=v[s].begin();it!=v[s].end();it++)
        {
            if(!visi[*it])
            {
                mi[*it]=s;
                q.push(*it);
                visi[*it]=true;
            }
        }
    }
}
int main()
{
ll m,n;
cin>>n>>m;
list<int> v[n+1];
for(ll i=0;i<m;i++)
{
    ll x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}
bfs(v,n,1);
    cout<<"Yes"<<endl;
    for(ll i=2;i<=n;i++)
        cout<<mi[i]<<endl;
}
