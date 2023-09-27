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

int n, k;
ll bit[111111];
ll a;

ll sum(int i)
{
  ll s = 0LL;
  while(i > 0){
    s += bit[i];
    i -= i & -i;
  }
  return s;
}

void add(int i, ll d)
{
  while(i <= n){
    bit[i] += d;
    i += i & -i;
  }
}

int main()
{
  while(cin >> n >> k, n){
    rep(i, 111111) bit[i] = 0LL;

    rep(i, n){
      cin >> a;
      add(i + 1, a);
    }

    ll res = sum(k);
    erep(i, k + 1, n) maxup(res, sum(i) - sum(i - k));
    cout << res << endl;
  }

  return 0;
}