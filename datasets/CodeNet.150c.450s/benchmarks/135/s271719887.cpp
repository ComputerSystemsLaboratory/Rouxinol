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

const int MAX_N = 1555;
const int MAX_M = 1555;
int h[MAX_N + 1];
int w[MAX_N + 1];
int N, M;

int main()
{
  while(cin >> N >> M, N){
    rep(i, N) cin >> h[i + 1];
    rep(i, M) cin >> w[i + 1];

    rep(i, N) h[i + 1] += h[i];
    rep(i, M) w[i + 1] += w[i];

    vi l, r;
    rep(i, N + 1) rep(j, i) l.pb(h[i] - h[j]);
    rep(i, M + 1) rep(j, i) r.pb(w[i] - w[j]);
    sort(ALL(l));
    sort(ALL(r));

    int res = 0;
    for(int i=0; i<l.size(); ){
      int np = upper_bound(ALL(l), l[i]) - lower_bound(ALL(l), l[i]);
      res += np * (upper_bound(ALL(r), l[i]) - lower_bound(ALL(r), l[i]));
      i = np + lower_bound(ALL(l), l[i]) - l.begin();
    }

    cout << res << endl;
  }

  return 0;
}