#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> num(N);
  for (auto& i : num)
    cin >> i;
  vector<long long int> dp(21, 0);
  dp[num[0]] = 1;
  for (int i = 0; i < N-2; i++) {
    vector<long long int> bnum(21,0);
    for (int j = 0; j < 21; j++) {
      int plus  = j+num[i+1];
      int minus = j-num[i+1];
      if (plus >= 0 && plus <= 20)
        bnum[plus]+=dp[j];
      if (minus>=0 && minus<= 20)
        bnum[minus]+=dp[j];
    }
    for(int j = 0; j < 21; j++){
      dp[j]=bnum[j];
    }
  }
  cout << dp[num[N-1]] << endl;
}

