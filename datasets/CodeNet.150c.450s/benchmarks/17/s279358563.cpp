#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); i++)
#define all(c) (c).begin(), (c).end()

int main() {
  vector<int> v(5);

  rep(i,5) cin >> v[i];
  sort(all(v), greater<int>());
  rep(i, 4) cout << v[i] << " ";
  cout << v[4] << endl;

  return 0;
}