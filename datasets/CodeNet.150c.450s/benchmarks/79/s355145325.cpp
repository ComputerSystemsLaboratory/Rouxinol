#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  vector<int> v;
  int n,r;
  int p,c;
  while(true) {
    cin >> n >> r;
    if(n == 0 && r == 0)
      break;
    v.clear();
    for(int i = 0; i < n; i++)
      v.push_back(i + 1);
    for(int i = 0; i < r; i++) {
      cin >> p >> c;
      p -= 1;
      rotate(v.rbegin(), v.rbegin() + p, v.rbegin() + p + c);
    }
    cout << v.back() << endl;
  }
  return 0;
}