#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int I=0;I<n;I++){
    string a=" ";
    string b=" ";
    string c;
    cin >> c;
    a+=c;
    cin >> c;
    b+=c;
  
    int dp[a.size()][b.size()];
    for(int i=0;i<a.size();i++){
      for(int j=0;j<b.size();j++){
	if(i==0||j==0)dp[i][j]=0;
	else if(a[i]==b[j])dp[i][j]=dp[i-1][j-1]+1;
	else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
      }
    }
    cout << dp[a.size()-1][b.size()-1] << endl;
  }
  return 0;
}