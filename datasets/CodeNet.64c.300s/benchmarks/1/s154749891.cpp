#include<bits/stdc++.h>
using namespace std;

int n;
int a[200010];

int partition(int p,int r){
  for(int i = p; i < r; i++){
    if(a[i] <= a[r]) swap(a[p++],a[i]);
  }
  swap(a[p],a[r]);
  return p;
}


signed main(){

  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];

  int p = partition(0,n-1);
  for(int i = 0; i < n; i++){
    if(i) cout << " ";
    if(i == p) cout << "[" << a[i] << "]";
    else cout << a[i];
  }
  cout << endl;

  return 0;
}

