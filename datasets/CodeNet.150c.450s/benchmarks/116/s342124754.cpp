#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, k;
  long long data[100000];
  long long sum[100000];
  while(cin >> n >> k, n | k){
    for(int i=0; i < n; i++){
      cin >> data[i];
    }
    for(int i=1; i < n; i++){
      data[i] += data[i-1];
    }
    long long ans = 0;
    for(int i=k; i < n; i++){
      ans = max(ans, data[i] - data[i-k]);
    }
    cout << ans << endl;
  }
  return 0;
}