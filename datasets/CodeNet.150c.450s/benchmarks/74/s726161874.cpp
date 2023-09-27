#include<iostream>
#include<vector>
using namespace std;
#define _inf 10000000

int min(int a, int b) {
    if(a > b) return b;
    else return a;
}

int getTheNumberOfCoin(vector<int> coins, int n, int m) {
    vector<int> dpTable(n+1, _inf);
    dpTable[0]  = 0;
    for(int i = 0; i < m; i++) {
        for(int j = coins[i]; j < n+1; j++) {
            dpTable[j] = min(dpTable[j], dpTable[j-coins[i]]+1);
        }
    }
    return dpTable[n];
}

int main() {
  int n , m;
  cin >> n >> m;
  vector<int> coin_list(m);
  for(int i = 0; i < m; i++) {
    cin >> coin_list[i];
  }
  int answer = getTheNumberOfCoin(coin_list, n, m);
  cout << answer << endl;
  return 0;
}