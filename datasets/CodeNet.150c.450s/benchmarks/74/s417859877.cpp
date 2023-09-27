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
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000009
#define EPS 1E-9

const int MAX_M = 20;
const int MAX_N = 50000;
int n, m;
int d[MAX_M];
int dp[MAX_N+1];

int main()
{
  cin >> n >> m;
  rep(i, m) cin >> d[i];

  erep(j, 0, n) dp[j] = INF;
  dp[0] = 0;
  rep(i, m) erep(j, 0, n) if(j - d[i] >= 0) minup(dp[j], dp[j-d[i]] + 1);

  cout << dp[n] << endl;

  return 0;
}