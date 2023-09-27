#include <bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >> n;

  vector<int64_t> a(21);

  a[0] = 1;
  for(int64_t i=0; i<n; i++){
    a[i+1] = a[i] * (i+1);
  }

  cout << a[n] << endl;

}
  
  
