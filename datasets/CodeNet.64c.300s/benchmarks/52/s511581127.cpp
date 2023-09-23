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
#define mp            make_pair
#define pb            push_back
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

const int    INF = 1000000000;
const ll     MOD = 1000000007LL;
const double EPS = 1E-12;

const int MAX_M = 9;
const int MAX_N = 10;
const int MAX_S = 100;
const int M = MAX_M;
const int N = MAX_N;
const int S = MAX_S;
ll dp[MAX_N+1][MAX_S+1];
int n, s;

int main()
{
  dp[0][0] = 1LL;
  rep(i, M+1) rev(j, N) rep(k, S-i+1) dp[j+1][k+i] += dp[j][k];

  while((cin >> n >> s) && n){
    cout << dp[n][s] << endl;
  }


  return 0;
}