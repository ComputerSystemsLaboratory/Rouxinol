#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <tuple>
#include <cassert>
#include <exception>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<P> vp;
#define rep(i,a,n) for(ll i = (a);i < (n);i++)
#define per(i,a,n) for(ll i = (a);i > (n);i--)
#define lep(i,a,n) for(ll i = (a);i <= (n);i++)
#define pel(i,a,n) for(ll i = (a);i >= (n);i--)
#define clr(a,b) memset((a),(b),sizeof(a))
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz size()
#define print(X) cout << (X) << endl
static const int INF = 1e+9+7;
ll n,m,l;
string s,t;
int d[200010],dp[1010][1010];
double w[1000],v[1000];
double box[200010];

int main(){
  while(1){
    cin >> n >> m;
    if(!n && !m)break;
    queue<int> que,p,q,r;
    int a,b;
    lep(i,1,n)que.push(n-i+1);
    rep(i,0,m){
      cin >> a >> b;
      rep(i,0,a-1){
        p.push(que.front());
        que.pop();
      }
      rep(i,0,b){
        q.push(que.front());
        que.pop();
      }
      //cout <<"size:" << que.size() << endl;
      while(!que.empty()){
        r.push(que.front());
        que.pop();
      }
      while(!q.empty()){
        que.push(q.front());
        q.pop();
      }
      while(!p.empty()){
        que.push(p.front());
        p.pop();
      }
      while(!r.empty()){
        que.push(r.front());
        r.pop();
      }
    }
    print(que.front());
  }
  return 0;
}
