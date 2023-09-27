#include<bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  vector<int> f(n+1, 1);
  for(int i = 2; i <= n; i++){
    f[i] = f[i-1] + f[i-2];
  }

  cout << f[n] << endl;

  return 0;
}