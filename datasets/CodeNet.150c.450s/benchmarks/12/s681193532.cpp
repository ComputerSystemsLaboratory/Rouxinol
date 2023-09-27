#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++){
    cout << "node " << i << ": key = " << a[i] << ", ";
    int p = i / 2, l = 2 * i, r = 2 * i + 1;
    if(p > 0) cout << "parent key = " << a[p] << ", ";
    if(l <= n) cout << "left key = " << a[l] << ", ";
    if(r <= n) cout << "right key = " << a[r] << ", ";
    cout << endl;
  }
}

int main(){
  solve();
  return 0;
}

