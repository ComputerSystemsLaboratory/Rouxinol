// Edit Distance (Levenshtein Distance)
#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
#define MAX 1050
string str1,str2;
int size1,size2,num;
int dp[MAX][MAX] = {0};

int main(){
  cin >> str1 >> str2;
  size1 = str1.length();
  size2 = str2.length();
  // ??????????????\??????????????????
  // ?????????
  dp[0][0] =0;
  for (int tate=1 ; tate <= size1 ; tate++) dp[tate][0] = tate;
  for (int yoko=1 ; yoko <= size2 ; yoko++) dp[0][yoko] = yoko;
  
  for (int tate=1 ; tate <= size1 ; tate++)
    for (int yoko=1 ; yoko <= size2 ; yoko++) {
      num = min(dp[tate][yoko-1]+1,dp[tate-1][yoko]+1);
      if (str1[tate-1] == str2[yoko-1]) dp[tate][yoko] = min(dp[tate-1][yoko-1],num);
      else dp[tate][yoko] = min(dp[tate-1][yoko-1]+1,num);
    }
  cout << dp[size1][size2] << endl;
  return 0;
}