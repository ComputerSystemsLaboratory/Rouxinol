#include <bits/stdc++.h>

using namespace std;

class BIT {
private:
  
  vector<int> bit;
  int size;
  
public:
  
  BIT(int n) : size(n)
  {
    bit.resize(n+1);
  }
  
  int sum(int i) {
    int s = 0;
    while(i > 0) {
      s += bit[i];
      i -= i & -i;
    }
    return s;
  }
  
  void add(int i, int x) {
    while(i <= size) {
      bit[i] += x;
      i += i & -i;
    }
  }
  
};

int main() {
  int n, q;
  int com, x, y;
  cin >> n >> q;
  BIT b(n);
  while(q--) {
    cin >> com >> x >> y;
    if(com == 0) {
      b.add(x, y);
    }
    else {
      cout << b.sum(y) - b.sum(x-1) << endl;
    }
  }
  return 0;
}