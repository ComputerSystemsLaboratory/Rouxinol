#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,r;
  while(cin >> n >> r,n){
    vector<int> a(n);
    for(int i=0; i<n; i++) a[i] = n-i;

    for(int i=0; i<r; i++){
      int p,c;
      cin >> p >> c;

      vector<int> v1,v2;
      for(int j=0; j<p-1; j++) v1.push_back(a[j]);
      for(int j=0; j<c; j++) v2.push_back(a[j+p-1]);
      for(int j=0; j<c; j++) a[j] = v2[j];
      for(int j=0; j<p-1; j++) a[j+c] = v1[j];
    }
    cout << a[0] << endl;
  }
  return 0;
}

