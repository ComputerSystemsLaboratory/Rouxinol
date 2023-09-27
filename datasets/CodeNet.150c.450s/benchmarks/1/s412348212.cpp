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
  cin >> n;
  vector<int> dp(1,1000000000);
  vector<int> sequence(n);
  REP(i,n){
    cin >> sequence[i];
    if(dp[dp.size()-1] > sequence[i]){
      REP(j,dp.size())
	if(dp[j] == sequence[i])break;
	else if(dp[j]>sequence[i]){
	  dp[j] = sequence[i];
	  break;
	}
    }else if(dp[dp.size()-1] < sequence[i]){
      dp.push_back(sequence[i]);
    }
    /*    REP(j,dp.size())cout << dp[j] << " ";
	  cout << endl;*/
  } 
  cout << dp.size() << endl;

  return 0;
}
 