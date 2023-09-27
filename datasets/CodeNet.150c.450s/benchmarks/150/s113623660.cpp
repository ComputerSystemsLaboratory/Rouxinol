#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

const int INF = 1001001000;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;

int main(){

  std::vector<int> a,b,c;
  int n;
  int k = 0;

  cin >> n;
  a.resize(n);
  for( int i = 0; i < n; ++i){
    cin >> a[i];
    if( a[i] > k){
      k = a[i];
    }
  }

  ++k;
  b.resize(n);
  c.resize(k);

  for( int i = 0; i < k; ++i){
    c[i] = 0;
  }

  for( int j = 0; j < n; ++j){
    ++c[a[j]];
  }

  for( int i = 1; i < k; ++i){
    c[i] = c[i] + c[i-1];
  }

  for( int j = n-1; j >= 0; --j){
    b[c[a[j]]-1] = a[j];
    --c[a[j]];
  }

  for( int i = 0; i < n-1; ++i){
    cout << b[i] << " ";
  }
  cout << b[n-1] << endl;
}