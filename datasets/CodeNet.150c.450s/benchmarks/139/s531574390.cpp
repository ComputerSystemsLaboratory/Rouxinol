#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lli long long int
#define f(i,a,b) for(i=a;i<b;i++)
#define ff first
#define sc second
#define pb push_back
#define full(v) v.begin(),v.end()
#define ms(a) memset(a,0,sizeof(a))
#define mod 1000000007
#define mod2 998244353
#define msb(b) memset(b,true,sizeof(b))
#define msf(b) memset(b,false,sizeof(b))
#define MAXN 100005
// bool prime[1000000]; // 10**6
// lli pri[100000],x=0;
/*void sieve()
{
  msb(prime);
  prime[0]=prime[1]=false;
  for(int p=2;p*p<=1000000;p++)
  {
    if(prime[p])
    {
      for(int i=p*2;i<=1000000;i+=p)
        prime[i]=false;
      // a[x++]=p;
    }
  }
} */
void solve(vector<int> v[], int n)
{
  vector<int> d(n+1, INT_MAX);
  vector<int> res(n+1,0);
  d[1] = 0;
  queue<int> q;
  q.push(1);
  bool vis[n+1];
  memset(vis,false,sizeof(vis));
  int i;
  bool flag = false;
  int cnt = 0;
  while(!q.empty())
  {
    int t = q.front();
    cnt++;
    //cout << t << " ";
    q.pop();
    vis[t] = true;
    for(auto it = v[t].begin(); it != v[t].end(); it++)
    {
      if(!vis[*it])
      { 
        if(d[*it] > d[t] + 1)
        {
          d[*it] = d[t] + 1;
          res[*it] = t;
        }
        q.push(*it);
        vis[*it] = true;
      }
    }
  }
  //cout << endl;
  /*f(i,2,n+1)
  {
    if(d[i] == INT_MAX)
    {
      flag = true;
      break;
    }
  }
  */
  if(cnt != n)
    cout << "No"<<endl;
  else
  {
    cout << "Yes"<<endl;
    f(i,2,n+1)
      cout << res[i] << endl;
  }
}
int main()
{
    fio;
    int t,n,i,m,x,y;
    cin >> n >> m;
    vector<int> v[n+1];
    f(i,0,m)
    {
      cin >> x >> y;
      v[x].pb(y);
      v[y].pb(x);
    }
    solve(v, n);
}
