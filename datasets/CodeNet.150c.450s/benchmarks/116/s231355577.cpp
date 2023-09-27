#include<bits/stdc++.h>
using namespace std;

int main(){

  int n, k;
  
  while(cin >> n >> k, n|k){
    
    int ans = 0, data[111111] = {};
    for(int i=0;i<n;i++) cin >> data[i];
    for(int i=1;i<n;i++) data[i] += data[i-1];
    
    for(int i=0;i<n-k;i++) ans = max(ans, data[i+k] - data[i]);
    
    cout << ans << endl;
  }
  
}