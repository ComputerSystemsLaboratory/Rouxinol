#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

int n;

void solve(){
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int x = a[n - 1];
  int j = -1;
  for(int i = 0; i < n - 1; i++){
    if(a[i] <= x){
      j++;
      int t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }
  j++;
  int t = a[j];
  a[j] = x;
  a[n - 1] = t;

  for(int i = 0; i < n - 1; i++){
    if(i == j) cout << "[" << a[i] << "] ";
    else cout << a[i] << " ";
  }
  if(j == n - 1) cout << "[" << a[n - 1] << "]\n";
  else cout << a[n - 1] << endl;

  return;
}

int main(){
  solve();
  return 0;
}

