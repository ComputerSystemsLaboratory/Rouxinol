#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> ans(N+1);
  for(int i = 1; i <= 100; i++){
    for(int j = 1; j <= 100; j++){
      for(int k = 1; k <= 100; k++){
        int v = i * i + j * j + k * k + i * j + j * k + i * k;
        if(v > N) continue;
        ans[v]++;
      }
    }
  }
  for(int i = 1; i <= N; i++) cout << ans[i] << endl;
  return 0;
}
