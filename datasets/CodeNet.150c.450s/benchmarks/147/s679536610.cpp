#include<bits/stdc++.h>
using namespace std;

void solve(int n){
  int ans[100050] = {};
  for(int i = 1; i <= 100; i++){
    for(int j = 1; j <= 100; j++){
      for(int k = 1; k <= 100; k++){
        int l = i * i + j * j + k * k + i * j + j * k + k * i;
        ans[l-1]++;
      }
    }
  }
  for(int i = 0; i < n; i++){
    cout << ans[i] << endl;
  }
}

int main(){
  int n;
  cin >> n;
  solve(n);
}