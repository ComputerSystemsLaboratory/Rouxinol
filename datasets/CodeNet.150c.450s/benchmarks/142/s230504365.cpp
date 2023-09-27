#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  string ans;

  cin >> n >> k;

  vector<int> a(n,0);

  for(int i=0;i<n;i++) {
    cin >> a[i];
  }

  for(int i=0;i<n-k;i++) {
    if(a[i]<a[i+k]) {ans="Yes";}
    else {ans="No";}
    cout << ans << endl;
  }

  return 0;
}
