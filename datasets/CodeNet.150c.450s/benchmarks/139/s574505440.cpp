#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
#include <limits>
using namespace std;
// 素因数分解
typedef pair<long long, long long> P;
vector<P> prime_factorize(long long n)
{
vector<P> res;
for (long long p = 2; p * p <= n; ++p)
{
if (n % p != 0)
continue;
int num = 0;
while (n % p == 0)
{
++num;
n /= p;
}
res.push_back(make_pair(p, num));
}
if (n != 1)
res.push_back(make_pair(n, 1));
return res;
}
// 因数分解
long long gcd(long long x, long long y)
{
  if (y == 0)
  {
    return x;
  }
  else
  {
    return gcd(y, x % y);
  }
}
const int MOD = 1000000007;
typedef long long unsigned int ll;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > G(n,vector<int>());
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(n,-1);
    vector<int> prev(n,-1);
    queue<int> que;
    que.push(0);
    dist[0]=0;
    while(!que.empty()){
        int v=que.front();
        que.pop();
        for(auto nv:G[v]){
            if(dist[nv]==-1){
                dist[nv]=dist[v]+1;
                prev[nv]=v;
                que.push(nv);
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++){
        cout<<prev[i]+1<<endl;
    }
    
return 0;
}