#include<bits/stdc++.h>
using namespace std;

int lcs(string str1, string str2){
  int C[1001][1001];
  int maxl = 0;

  str1 = ' ' + str1;
  str2 = ' ' + str2;

  for(int i = 1 ; i <= str1.size() ; i++) C[i][0] = 0;
  for(int j = 1 ; j <= str2.size() ; j++) C[0][j] = 0;

  for(int i = 1 ; i <= str1.size()-1 ; i++){
    for(int j = 1 ; j <= str2.size()-1 ; j++){
     
      if(str1[i] == str2[j]) C[i][j] = C[i - 1][j - 1] + 1;
      else if(C[i - 1][j] >= C[i][j -1]) C[i][j] = C[i - 1][j];
      else C[i][j] = C[i][j - 1];

      if(C[i][j] >= maxl) maxl = C[i][j];

    }
  }

  return maxl;
}

int main(){
  string str1, str2;
  int n;

  cin >> n;

  for(int i = 0 ; i < n ; i++){
    cin >> str1 >> str2;
    cout << lcs(str1, str2) << endl;
  }

  return 0;
}