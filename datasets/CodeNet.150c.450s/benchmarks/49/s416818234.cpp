#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, tmp;
  while(cin >> n && n != 0){
    vector<int> s;
    for(int i = 0; i < n; i++) {
      cin >> tmp;
      s.push_back(tmp);
    }
    sort(s.begin(), s.end());
    s.erase(s.begin()); s.erase(s.end() - 1);
    tmp = 0;
    for(auto i: s) {
      tmp += i;
    }
    cout << tmp / (n - 2)<< endl;
  }
}