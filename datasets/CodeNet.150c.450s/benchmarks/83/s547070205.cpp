#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define erev(i, m, n) for(int (i)=(m); (i)>=n; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000009
#define EPS 1E-9

const int MAX_N = 100;
const int MAX_W = 10000;
int N, W;
int v[MAX_N];
int w[MAX_N];
int dp[MAX_W+1];

// 荷物ひとつずつだけ？
int main()
{
  cin >> N >> W;
  rep(i, N) cin >> v[i] >> w[i];

  rep(i, N) erev(j, W, w[i]) maxup(dp[j], dp[j-w[i]] + v[i]);

  cout << dp[W] << endl;

  return 0;
}