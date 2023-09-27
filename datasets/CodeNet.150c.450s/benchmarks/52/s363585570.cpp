#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(100);
  int n;
  while (cin >> n) {
    if (n > 0) {
      a.push_back(n);
    } else {
      cout << a.back() << endl;
      a.pop_back();
    }
  }
}

