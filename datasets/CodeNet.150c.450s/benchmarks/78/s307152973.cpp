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

const int MAX_N = 1000011;
int dp1[MAX_N+2];
int dp2[MAX_N+2];
vi w1;
vi w2;
int N;

inline int get(int i){ return i * (i + 1) / 2 * (i + 2) / 3; }

int main()
{
  rrep(i, 1, MAX_N){
    if(get(i) >= MAX_N) break;
    w1.pb(get(i));
    if(get(i) & 1) w2.pb(get(i));
  }
  int n1 = w1.size();
  int n2 = w2.size();

  rep(i, MAX_N) dp1[i] = dp2[i] = INF;
  rep(i, n1) dp1[w1[i]] = 1;
  rep(i, n2) dp2[w2[i]] = 1;
  rrep(i, 1, MAX_N) rep(j, n1) if(i + w1[j] < MAX_N) minup(dp1[i + w1[j]], dp1[i] + 1);
  rrep(i, 1, MAX_N) rep(j, n2) if(i + w2[j] < MAX_N) minup(dp2[i + w2[j]], dp2[i] + 1);

  while(cin >> N, N) cout << dp1[N] << ' ' << dp2[N] << endl;

  return 0;
}