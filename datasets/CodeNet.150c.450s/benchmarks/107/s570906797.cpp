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

const int MAX_S = 1000;
string s, t;
int S, T;
int dp[MAX_S+1][MAX_S+1];

int main()
{
  cin >> s >> t;
  S = s.size();
  T = t.size();

  erep(i, 0, S) erep(j, 0, T) dp[i][j] = INF;
  erep(i, 0, S) dp[i][0] = i;
  erep(j, 0, T) dp[0][j] = j;

  erep(i, 1, S) erep(j, 1, T){
    dp[i][j] = dp[i-1][j-1];
    if(s[i-1] != t[j-1]){
      minup(dp[i][j], min(dp[i-1][j], dp[i][j-1]));
      dp[i][j] += 1;
    }
  }

  cout << dp[S][T] << endl;

  return 0;
}