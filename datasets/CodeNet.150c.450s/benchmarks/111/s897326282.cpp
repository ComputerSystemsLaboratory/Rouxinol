#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int N;
  while(cin >> N){
    vector<int> v;
    int last;
    for(int i = 0; i < N; ++i){
      int t;
      cin >> t;
      if(i==N-1){
	last = t;
	break;
      }else v.push_back(t);
    }
    long long dp[N][21];
    for(int i = 0; i < N; ++i){
      for(int j = 0; j < 21; ++j){
	dp[i][j] = 0;
      }
    }
    dp[0][v[0]]=1;
    for(int i = 1; i < v.size(); ++i){
      for(int j = 0; j < 21; ++j){
	if( dp[i-1][j] > 0 ){
	  if( j + v[i] < 21 )
	    dp[i][j+v[i]] += dp[i-1][j];
	  if( j - v[i] >= 0 )
	    dp[i][j-v[i]] += dp[i-1][j];
	}
      }
    }
    long long res = 0;
    for(int i = 0; i < 21; ++i){
      res += dp[(int)v.size()-1][i];
    }
    res = dp[(int)v.size()-1][last];
    cout << res << endl;
  }
    
  return 0;
}