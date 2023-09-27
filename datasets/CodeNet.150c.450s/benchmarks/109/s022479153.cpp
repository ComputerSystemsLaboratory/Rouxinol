#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define rrev(i, m, n) for(int (i)=(n)-1; (i)>=(m); (i)--)
#define erev(i, m, n) for(int (i)=(n); (i)>=(m); (i)--)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define pb            push_back
template<class T, class S> inline pair<T, S> mp(T x, S y){ return make_pair(x, y); }
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

static const int    INF = 1000000000;
static const ll     MOD = 1000000007LL;
static const double EPS = 1E-12;

int n;
int h, m, s;
int t, u;

int main()
{
  while(cin >> n, n){
    priority_queue<pii> que;
    rep(i, n){
      scanf("%d:%d:%d", &h, &m, &s);  t = 3600 * h + 60 * m + s;
      scanf("%d:%d:%d", &h, &m, &s);  u = 3600 * h + 60 * m + s;
      que.push(mp(-t, -1));
      que.push(mp(-u, 1));
    }

    int res = 0;
    int cnt = 0;
    while(!que.empty()){
      pii p = que.top();  que.pop();
      cnt += p.second;
      minup(res, cnt);
    }

    cout << -res << endl;
  }

  return 0;
}