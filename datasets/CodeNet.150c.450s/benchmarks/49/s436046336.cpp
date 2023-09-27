#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)

int main(){
  int n;
  while(cin >> n, n){
      vector<int> v(n);
      rep(i, n)cin >> v[i];
      sort(v.begin(), v.end());
      int sum = accumulate(v.begin()+1, v.end()-1, 0);
      cout << sum / (n-2) << '\n';
  }
  return 0;
}