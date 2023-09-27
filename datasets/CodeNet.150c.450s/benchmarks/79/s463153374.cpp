#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int n, r; cin >> n >> r && (n|r); ){
    deque<int> deq;
    for(int i = 0; i < n; ++i) deq.push_front(i+1);
    for(int i = 0; i < r; ++i) {
      int p, c;
      cin >> p >> c;
      --p;
      deque<int> tmp(deq.begin() + p, deq.begin() + (p+c));
      deq.erase(deq.begin() + p, deq.begin() + (p+c));
      for(int j = (int)tmp.size()-1; j >= 0; --j) deq.push_front(tmp[j]);
    }
    cout << deq.front() << endl;
  }
  return 0;
}