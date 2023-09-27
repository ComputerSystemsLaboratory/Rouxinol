#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  vector<int> v;
  int ans = INT_MIN;
  int small;

  cin >> n;

  for(int i = 0; i < n; i++){
    int j;

    cin >> j;
    v.push_back(j);
  }

  small = v[0];

  for(int i = 1; i < n; i++){
    small = min(small,v[i-1]);
    // int x = v[i] - min_element(v[0],v[i-1]);
    ans = max(ans,v[i]-small);
  }

  cout << ans << endl;


}