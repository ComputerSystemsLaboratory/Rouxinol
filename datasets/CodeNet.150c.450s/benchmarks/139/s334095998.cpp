#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <tuple>
#include <climits>
#include <stdlib.h>
#include <queue>
#include <stack>


#define mp make_pair
#define pb push_back
#define forn(n) for(long long i=0;i<n;++i)
#define fast ios::sync_with_stdio(false), cin.tie(0)

#define ll long long
#define ull unsigned long long
#define mod 1000000007
typedef long double ld;
using namespace std;





ll reverse(ll n)
{
	ll s=0;
	while(n>0)
	{
       ll t=n%10;
	   s=s*10+t;
	   n/=10;
	}
	return s;
}
int count_setbits(int N)

{ int cnt=0;

while(N>0)

{

cnt+=(N&1);

N=N>>1;

}

return cnt;

}
ll power(ll x, ll y)  
{  
    int res = 1;     // Initialize result  
  
    x = x % mod; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % mod;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % mod;  
    }  
    return res;  
}  
bool isprime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    if(n%i==0)
    return false;
    return true;
}

  
   
/* 

to find the farthest node from root using dfs and its distance from root, we have to just 
change the dfs function a bit

void dfs(ll node,ll dis)
{
    vis[node]=true;
    // for any processing of the node, like printing it, please do it here
    if(dis>maxd)
    {
        maxd=dis;maxnode=node;
    }


    for(ll i=0;i<adj[node].size();i++)
    {
        ll child=adj[node][i];
        if(!vis[child])
        dfs(child,dis+1);

    }
}

*/

    
  



void count_sort(vector<ll> & sa,vector<ll> & c){
    ll n=sa.size();
	vector<ll>pos(n),cnt(n),sa_new(n);
	for(ll x:c)cnt[x]++;
	for(ll i = 1;i < n;i++)pos[i] = pos[i-1] + cnt[i-1];
	for(ll x:sa)sa_new[pos[c[x]]++] = x;
	sa = sa_new;
}
vector<ll> suffix_array(string s)
{
   s+="$";
   ll n=s.size();
   vector<ll> p(n),c(n); // p is position array, c is equivalence array

   // if k==0
   vector< pair<char,ll> > a(n);
   for(ll i=0;i<n;i++)
   a[i]=make_pair(s[i],i);
   sort(a.begin(),a.end());
   for(ll i=0;i<n;i++)
   {
       p[i]=a[i].second;
   }
   c[p[0]]=0;
   for(ll i=1;i<n;i++)
   {
       if(a[i].first==a[i-1].first)
       c[p[i]]=c[p[i-1]];
       else
       {
           c[p[i]]=c[p[i-1]]+1;
       }
       
   }

   ll k=0;
   while((1<<k)<n)
   {
      
      for(ll i=0; i<n;i++)
      {
          p[i]=(p[i]-(1<<k)+n)%n;
      }
      count_sort(p,c);
      
      vector<ll> c_new(n);
      c_new[p[0]]=0;
      
  
   for(ll i=1;i<n;i++)
   {
        pair<ll,ll> prev=make_pair(c[p[i-1]],c[(p[i-1]+(1<<k))%n]);
       pair<ll,ll> now=make_pair(c[p[i]],c[(p[i]+(1<<k))%n]);
       if(now==prev)
       c_new[p[i]]=c_new[p[i-1]];
       else
       {
           c_new[p[i]]=c_new[p[i-1]]+1;
       }
       
   }
   c=c_new;
k++;
   }
   return p;



}

bool vis[1000001];
ll dist[1000001];
int color[1000001];
vector<ll> parent(1000001,-1);

vector<ll> adj[1000001];
vector<ll> edges;
ll maxd,maxnode;


void dfs(ll node)
{
    stack<ll> s;
    vis[node]=true;
    s.push(node);
    // for any processing of the node, like printing it, please do it here
    dist[node]=0;
   while(!s.empty())
   {
      ll curr=s.top();
      s.pop();
      for(ll i:adj[curr])
      {
          if(!vis[i])
        {
            s.push(i);
            vis[i]=1;
            dist[i]=dist[curr]+1;
        }
      }
     
   }  
}
void bfs(ll node)
{
    queue<ll> q;
    q.push(node);
    vis[node]=1;
    dist[node]=0;

    while(!q.empty())
    {
        ll curr=q.front();
        q.pop();

        for(ll i:adj[curr])
        {
            if(vis[i]==0)
            {
                q.push(i);
                dist[i]=dist[curr]+1;
                vis[i]=1;
                parent[i]=curr;
            }
        }
    }
}

bool dfs_bipartite_check(ll node,int c)
{
    vis[node]=1;
    color[node]=c;
    for(ll i:adj[node])
    {
        if(vis[i]==0)
        {
           if(dfs_bipartite_check(i,c^1)==false) // if not visited, dfs call
           return false;
        }
        else
        {
            if(color[node]==color[i]) // if visited then check equality of colors
            return false;
        }
        
    }
    return true;
}

ll subsize[1000001];
ll subtree_size(ll node)
{
    vis[node]=1;
    ll curr_size=1;
    for(ll i=0;i<adj[node].size();i++)
    {
        ll child=adj[node][i];
        if(vis[child]==0)
        {
            curr_size+=subtree_size(child); // dfs call when child is not visited
        }

    }
    subsize[node]=curr_size;    // update size of subtree of the current node
    return curr_size;  // return size of subtree of the current node
    
}



bool cycle_detect(ll node,ll parent)
{
    vis[node]=1;
    for(ll child:adj[node])
    {
        if(vis[child]==0) {          // if not visited, make dfs call, and return true if dfs returns true
        if(cycle_detect(child,node))
        return true;
        }
        else
        {
            if(child!=parent)         // check if visited child is parent of current node or ancestor of current node
            return true; // returns true if child is ancestor and not parent of current node
        }
        
    }
    return false;
}

// for graph questions having multiple test cases, dont forget to clear adjacency list and clear visited array 
/* Just add these lines in each testcases

       for(ll i=1;i<=nodes;i++)
       adj[i].clear(),vis[i]=0;

*/

ull countBits(ull number) 
{       
      return (ull)log2(number)+1; 
} 





int main()
{
  fast;
  ll n,m;cin>>n>>m;
  forn(m)
  {
      ll a,b;cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
  }
  bfs(1);
  ll cnt=0;
  for(ll i:parent)
  if(i!=-1)
  cnt++;
  if(cnt!=n-1)
  cout<<"No\n";
  else
  {
      cout<<"Yes\n";
      for(ll i:parent)
      if(i!=-1)
      cout<<i<<"\n";
  }
  
  

      

  

  

  




}
