#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector <vector<int> > dp;
  string x,y;
  int n;

  cin >> n;
  for(int times=0;times<n;times++){
    int ans =0;

    cin >> x >> y;
    dp.resize(y.size()+1);
    for(int i=0;i<=y.size();i++){
      dp[i].resize(x.size()+1);
    }

    for(int i=0;i<=y.size();i++){
      dp[i][0]=0;
    }
    for(int i=0;i<=x.size();i++){
      dp[0][i]=0;
    }

    for(int i=1;i<=y.size();i++){
      for(int j=1;j<=x.size();j++){
        if(x[j-1]==y[i-1]){
          dp[i][j] = dp[i-1][j-1]+1;
        }else{
          dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
	ans = max(ans,dp[i][j]);
      }
    }

    cout << ans << endl;
  }
}
