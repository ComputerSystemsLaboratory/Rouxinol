#include <bits/stdc++.h> 
using namespace std; 
#include <ext/pb_ds/assoc_container.hpp>  
using namespace __gnu_pbds; 
typedef int tp;
typedef tree<tp,null_type,less<tp>,rb_tree_tag,tree_order_statistics_node_update> oSet; 
#define frt(i, s, t) for (int i = s; i <= t; i++)
#define fr(i, s, t) for (int i = s; i < t; i++)
#define frr(i, s, t) for (int i = s; i >= t; i--)
#define srt(a) sort(a.begin(),a.end());
#define mcp(a,b) memcpy ( a, b, b.size());
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define lb lower_bound
#define ub upper_bound
#define prt(i,ans) cout<<"Case #"<<i<<": "<<ans<<endl
#define ld long double

int solve(int t) 
{
   int n;
   cin>>n;
   int v;
   vector<int> cnt(n+1,0);
   frt(x,1,sqrt(n))
   {
      frt(y,1,sqrt(n))
      {
         frt(z,1,sqrt(n))
         {
            v=x*x+y*y+z*z+x*y+y*z+z*x;
            if(v<=n)
            cnt[v]++;
         }
      }
   }
   frt(i,1,n)
   cout<<cnt[i]<<endl;
   return 0;
} 
int main()
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL);    
   int t=1; 
   //cin>>t; 
   int p=t;
   while(t--) 
   { 
      solve(p-t); 
   } 
   
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0; 
} 
