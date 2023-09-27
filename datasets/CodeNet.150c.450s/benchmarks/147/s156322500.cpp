#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long MOD = 1e9+7;
int MAX_INT = 1e9;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  vector<int> ans(10050, 0);

  for(int i = 1; i < 105; i++) {
    for(int j = 1; j < 105; j++) {
      for(int k = 1; k < 105; k++) {
        int v = i*i + j*j + k*k + i*j + j*k + k*i;
        if(v < 10050) {
          ans[v] += 1;
        }
      }
    }
  }

  for(int i = 0; i < N; i++) {
    cout << ans[i+1] << endl;
  }

  return 0;
}
