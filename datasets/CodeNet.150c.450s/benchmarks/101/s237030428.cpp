#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007

ll n;
vector<ll>v[1000005];
ll cnt=1;
bool vis[1000005];
ll clr[1000005];
queue<ll>q;
void bfs(ll s, ll d)
{
    q.push(s);
    clr[s]=d;
    while(!q.empty())
    {
         ll p=q.front(); q.pop();
         for(ll i=0;i<v[p].size();i++)
         {
             ll u=v[p][i];
             if(clr[u]==-1)
             {
                 q.push(u);
                 clr[u]=d;
             }
         }
    }
}

void colour( )
{
    fr(i,1000000)clr[i]=-1;

    fr(i,n)if(clr[i]==-1)bfs(i, cnt++);
}
int main()
{
    ll m,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(m);

      fr(i,m)
      {
          cin>>x>>y;
          v[x].pb(y);
          v[y].pb(x);
      }
      colour();

      cin>>q;
      while(q--)
      {
          cin>>x>>y;
          if(clr[x]==clr[y])cout<<"yes"<<endl;
          else cout<<"no"<<endl;
      }
return 0;
}

