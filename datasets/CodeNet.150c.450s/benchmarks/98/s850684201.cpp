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

const int MAX_N = 100;
const int MAX_M = 100;
int n, m;
int s[MAX_N];
int t[MAX_M];

int main()
{
  while(cin >> n >> m, n){
    int rt, rh;
    int taro = 0;
    int hanako = 0;
    int res = INF;
    rep(i, n) cin >> s[i];
    rep(i, m) cin >> t[i];
    rep(i, n) taro += s[i];
    rep(i, m) hanako += t[i];

    rep(i, n) rep(j, m) if(taro - s[i] + t[j] == hanako - t[j] + s[i]){
      if(minup(res, s[i] + t[j])){
        rt = s[i];
        rh = t[j];
      }
    }

    if(res < INF) cout << rt << " " << rh << endl;
    else puts("-1");
  }

  return 0;
}