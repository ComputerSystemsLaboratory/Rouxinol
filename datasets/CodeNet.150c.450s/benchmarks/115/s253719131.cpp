#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int lcs(string x, string y) {
  int dp[1001][1001];
  int maxl=0;
  x = ' ' + x;
  y = ' ' + y;
  for (int i = 0; i < x.size(); i++)
  {
    dp[i][0] = 0;
  }
  for (int i = 0; i < y.size(); i++)
  {
    dp[i][0] = 0;
  }
  for (int i = 1; i < x.size(); i++)
  {
    for (int j = 1; j < y.size(); j++)
    {
      if (x[i] == y[j]) {
        dp[i][j] = dp[i-1][j-1] + 1;
      }
      else {
        dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
      }
    maxl = max(maxl, dp[i][j]);
    }
    
  }
  return maxl;
}

int main(){

  //std::ifstream in ("input.txt");
  //std::cin.rdbuf(in.rdbuf());
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b) << endl;
  }
  return 0;
  
}


