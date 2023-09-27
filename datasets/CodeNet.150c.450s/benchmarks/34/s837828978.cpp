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
#define MOD 1000000007
#define EPS 1E-12

const int MAX_N = 30;
int n;
int dp[MAX_N+1];

int main()
{
  dp[1]=1;  dp[2]=2;  dp[3]=4;
  erep(i, 4, MAX_N) dp[i] = dp[i-3] + dp[i-2] + dp[i-1];

  while((cin >> n) && n){
    cout << dp[n] / 3650 + (dp[n]%3650 ? 1 : 0) << endl;
  }

  return 0;
}