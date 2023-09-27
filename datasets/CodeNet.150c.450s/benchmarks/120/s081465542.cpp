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
#define mp            make_pair
template<class T, class S> inline bool minup(T& m, const S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, const S x){ return m<(T)x ? (m=(T)x, true) : false; }

static const int    INF = 1000000000;
static const ll     MOD = 1000000007LL;
static const double EPS = 1E-10;

int C, R;
int d[11111][11];
int to[11111];
int t[11111];

inline int bitcount(int n)
{
  n = (n & 0x55555555) + (n >> 1 & 0x55555555);
  n = (n & 0x33333333) + (n >> 2 & 0x33333333);
  n = (n & 0x0f0f0f0f) + (n >> 4 & 0x0f0f0f0f);
  n = (n & 0x00ff00ff) + (n >> 8 & 0x00ff00ff);
  return (n & 0x0000ffff) + (n >> 16 & 0x0000ffff);
}

inline int bitcount(ll n)
{
  n = (n & 0x5555555555555555) + ((n >> 1) & 0x5555555555555555);
  n = (n & 0x3333333333333333) + ((n >> 2) & 0x3333333333333333);
  n = (n & 0x0f0f0f0f0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f0f0f0f0f);
  n = (n & 0x00ff00ff00ff00ff) + ((n >> 8) & 0x00ff00ff00ff00ff);
  n = (n & 0x0000ffff0000ffff) + ((n >> 16) & 0x0000ffff0000ffff);
  return (int)((n & 0x00000000ffffffff) + ((n >> 32) & 0x00000000ffffffff));
}

int main()
{
  while(cin >> R >> C, R){
    rep(i, R) rep(j, C) cin >> d[j][i];

    rep(i, C) to[i] = 0;
    rep(i, C) rep(j, R) to[i] |= d[i][j] * (1 << j);

    int res = 0;
    rep(i, 1 << R){
      rep(j, C) t[j] = to[j];
      rep(j, C) t[j] = i & ~t[j] | ~i & t[j];
      int sum = 0;
      rep(j, C) sum += max(bitcount(t[j]), R - bitcount(t[j]));
      maxup(res, sum);
    }

    cout << res << endl;
  }

  return 0;
}