#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = (1e9) + 100;
int main(){
  int n;
  cin >> n;
  vector<int> DP(n+1,INF);
  DP[0] = -INF;
  for(int i = 0; i < n; ++i){
    int a;
    cin >> a;
    int id = lower_bound(DP.begin(), DP.end(), a) - DP.begin();
    DP[id] = a;
  }
  cout << lower_bound(DP.begin(), DP.end(), INF) - DP.begin() - 1 << endl;
  return 0;
}

