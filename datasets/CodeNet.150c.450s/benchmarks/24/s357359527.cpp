#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000

int main(){
  int n, m;
  while(scanf("%d %d", &n, &m), n|m){
    priority_queue<pii> q; //<p,d> sorted by p

    rep(i,n){
      int d,p;
      scanf("%d %d", &d, &p);
      q.push(mp(p,d));
    }

    while(true){
      if(q.empty()) break;
      if(q.top().second > m) break;
      m -= q.top().second;
      q.pop();
    }

    int res=0;
    if(m>0 && !q.empty()){
      pii p = q.top(); q.pop();
      res += (p.second-m)*p.first;
    }
    
    while(!q.empty()){
      pii p = q.top(); q.pop();
      res += p.first * p.second;
    }

    cout << res << endl;

  }

  return 0;
}