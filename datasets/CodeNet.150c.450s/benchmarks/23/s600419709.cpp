#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> l;
  l.push_back(1);
  l.push_back(1);

  for (int i = 2; i <= n; i++) {
    l.push_back(l[i-2] + l[i-1]);
  }
  cout << l[n] << endl;

  return 0;
}