#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000
#define T_MAX 24*60*60

int main(){
  vector<int> v(T_MAX);

  while(true){
    int n;
    cin >> n;

    if(n==0) break;

    rep(i,T_MAX) v[i]=0;

    int h,m,s;
    rep(i,n){
      scanf("%d:%d:%d", &h, &m, &s);// dbg(h);dbg(m);dbg(s);
      int t1 = (h*60+m)*60+s;
      scanf("%d:%d:%d", &h, &m, &s);// dbg(h);dbg(m);dbg(s);
      int t2 = (h*60+m)*60+s;
      v[t1]++;
      v[t2]--;
    }

    int current=0, res=0;
    rep(i, T_MAX){
      current += v[i];
      res = max(res, current);
    }

    cout << res << endl;
  }
}