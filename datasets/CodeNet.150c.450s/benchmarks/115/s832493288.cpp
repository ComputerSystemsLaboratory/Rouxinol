#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
  int q;
  cin >> q;

  for(int i = 0; i < q; i++){
    string a, b;
    cin >> a;
    cin >> b;

    vector<vector<int> > dp(a.size() + 1, vector<int>(b.size() + 1, 0));
    for(int i = 0; i < (int)a.size(); i++){ dp[i][0] = 0; }
    for(int i = 0; i < (int)b.size(); i++){ dp[0][i] = 0; }

    for(int i = 1; i <= (int)a.size(); i++){
      for(int j = 1; j <= (int)b.size(); j++){
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        if(a[i - 1] == b[j - 1])
          dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
      }
    }

    cout << dp[a.size()][b.size()] << endl;
  }
  
  return 0;
}