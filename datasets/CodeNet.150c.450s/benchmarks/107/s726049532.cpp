#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int ED(string str1, string str2)
{
  int n1, n2, maxi;
  n1 = (int)(str1.length());
  n2 = (int)(str2.length());

  str1 = '_' + str1; n1++;
  str2 = '_' + str2; n2++;
  //cout << str1 << " " << str2 << "\n";

  //n1 = maxi; n2 = maxi;
  
  int dp[n1][n2], change;

  for(int i = 0; i < n1; i++) {
    for(int j = 0; j < n2; j++) {
      dp[i][j] = 0;
    }
  }

  for(int i = 1; i < n1; i++) {
      dp[i][0] = i;
  }

  for(int i = 1; i < n2; i++) {
      dp[0][i] = i;
  }

  for(int i = 1; i < n1; i++) {
    for(int j = 1; j < n2; j++) {
      if(str1[i] != str2[j]) {
	change = 1;
      }
      else {
	change = 0; 
      }
      dp[i][j] = min({dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + change});
    }
  }

  /*
  for(int i = 0; i < n1; i++) {
    for(int j = 0; j < n2; j++) {
      cout << dp[i][j] << " ";
    }
    cout << "\n";
  }
  */

  return dp[n1-1][n2-1];
}

int main()
{
  string str1, str2;
  cin >> str1;
  cin >> str2;

  cout << ED(str1, str2) << "\n";
 

  return 0;
}


