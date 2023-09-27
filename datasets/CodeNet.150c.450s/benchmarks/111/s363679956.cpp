#include<bits/stdc++.h>
using namespace std;
 
template<typename T1, typename T2> istream& operator>>(istream& is, pair<T1,T2>& a){ return is >> a.first >> a.second; }
template<typename T1, typename T2> ostream& operator<<(ostream& os, pair<T1,T2>& a){ return os << a.first << " "<<a.second; }
template<typename T> istream& operator>>(istream& is, vector< T >& vc){ for(int i = 0; i < vc.size(); i++) is >> vc[i]; return is; }
template<typename T> ostream& operator<<(ostream& os, vector< T >& vc){ for(int i = 0; i < vc.size(); i++) os << vc[i] << endl; return os; }

 
#define ForEach(it,c) for(__typeof (c).begin() it = (c).begin(); it != (c).end(); it++)
#define ALL(v) (v).begin(), (v).end()
#define UNQ(s) { sort(ALL(s)); (s).erase( unique( ALL(s)), (s).end());}
#define fr first
#define sc second
 
typedef pair< int , int > Pi;
typedef pair< int , Pi > Pii;
const int INF = 1 << 30;

typedef long long int64;

int main(){
  int N;
  cin >> N;
  vector < int > Value(N);
  cin >> Value;
  vector< vector< int64 > > dp( N - 1, vector< int64 >( 21, 0));
  dp[0][Value[0]] = 1;
  for(int i = 1; i < N - 1; i++){
    for(int j = 20; j >= 0; j--){
      if(dp[i][j] == -1) continue;
      if(j + Value[i] < 21) dp[i][j + Value[i]] += dp[i - 1][j];
      if(j - Value[i] >= 0) dp[i][j - Value[i]] += dp[i - 1][j];
    }
  }
  cout << dp[N - 2][Value[N - 1]] << endl;
}