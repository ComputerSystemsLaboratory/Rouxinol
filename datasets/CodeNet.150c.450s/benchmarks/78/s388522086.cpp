#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  int n;
  while(cin>>n,n){
    vector<int> four;
    for(int i=1;i*(i+1)*(i+2)/6<=n;i++){
      four.push_back(i*(i+1)*(i+2)/6);
    }
    vector<int> dp(n+1,1000000);
    dp[0]=0;
    for(int i=0;i<four.size();i++){
      for(int j=four[i];j<=n;j++){
	dp[j] = min(dp[j-four[i]] + 1,dp[j]);
      }
      /*      REP(i,n+1)cout << dp[i] << " ";
	      cout << endl;*/
	}
    cout << dp[n] << " ";
    dp.clear();
    dp.resize(n+1,10000000);
    dp[0]=0;
    for(int i=0;i<four.size();i++){
      if(four[i]%2){
	for(int j=four[i];j<=n;j++){
	  dp[j] = min(dp[j-four[i]] + 1,dp[j]);
	}
      }
      /*            REP(i,n+1)cout << dp[i] << " ";
		    cout << endl;*/
    }
 
    cout << dp[n] << endl;
  }
    return 0;
}