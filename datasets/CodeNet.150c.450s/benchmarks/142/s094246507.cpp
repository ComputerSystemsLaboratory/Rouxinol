#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
  int n, k;
  int a[200005];
  cin >> n >> k;
  for(int i=0; i<n; ++i){
    cin >> a[i];
  }
  for(int i=k; i<n; ++i){
    if(a[i-k] < a[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
