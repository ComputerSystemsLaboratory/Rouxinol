#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>

#define REP(i,n) for(auto i=0;i<n;++i)
#define REPR(i,n) for(auto i=n;i>=0;--i)
#define REPI(itr,v) for(auto itr=v.begin();itr!=v.end();++itr)
#define REPIR(itr,v) for(auto itr=v.rbegin();itr!=v.rend();++itr)
#define FOR(i,a,b) for(auto i=a;i<b;++i)
#define SORT(v,n) sort(v, v+n)
#define SORTV(v) sort(v.begin(), v.end())
#define ALL(v) v.begin(),v.end()
#define llong long long
#define ll long long
#define INF 999999999
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define MP make_pair
#define SV(n,v) {int tmp;for(int i=0;i<n;++i){scanf("%d",&tmp);v.push_back(tmp);}}

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

class ele{
  public:
    llong cur;
    llong prev;
  ele(llong _cur, llong _prev){
    cur = _cur;
    prev = _prev;
  }
};

int main(){

  llong n, m;
  cin >> n >> m;
  vector<vector<llong>> v(n);
  REP(i,m){
    int a, b;
    cin >> a >> b;
    a--; b--;
    v[a].pb(b);
    v[b].pb(a);
  }

  queue<ele> que;
  que.push(ele(0, -1));
  
  vector<llong> ans(n);
  bool visited[100010] = {};
  
  visited[0] = true;
  while(!que.empty()){
    ele tp = que.front();
    que.pop();
    
    ans[tp.cur] = tp.prev;

    REPI(itr, v[tp.cur]){
      if(!visited[*itr]){
        que.push(ele(*itr, tp.cur));
        visited[*itr] = true;
      }
    }
  }

  REP(i,n){
    if(!visited[i]){
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  FOR(i,1,n){
    cout << ans[i] + 1 << endl;
  }
  return 0;
}

