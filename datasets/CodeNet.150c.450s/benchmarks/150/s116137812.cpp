#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e6;
int a[N+1],b[N+1],c[N+1];

signed main(){

  int n; cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    c[a[i]]++;
  }

  for(int i = 0; i < N; i++) c[i+1] += c[i];
  for(int i = 0; i < n; i++){
    b[c[a[i]]] = a[i];
    c[a[i]]--;
  }

  for(int i = 1; i <= n; i++){
    if(i == n) cout << b[i] << endl;
    else cout << b[i] << " ";
  }

  return 0;
}

