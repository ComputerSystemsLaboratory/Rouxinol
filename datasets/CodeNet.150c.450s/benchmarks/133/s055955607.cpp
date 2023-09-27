#include <bits/stdc++.h>
using namespace std;

int main() {
  int D;
  cin >> D;
  vector<int> c(26);
  for(int i = 0; i < 26; i++){
    cin >> c.at(i);
  }
  vector<vector <int>> s(D, vector<int>(26));
  for(int i = 0; i < D; i++){
    for(int j = 0; j < 26; j++){
      cin >> s.at(i).at(j);
    }
  }
  vector<int> t(D);
  for(int i = 0; i < D; i++){
    cin >> t.at(i);
  }
  vector<int> l(26);
  int v = 0;
  
  for(int i = 0; i < D; i++){
    v += s.at(i).at(t.at(i) - 1);
    l.at(t.at(i) - 1) = i + 1;
    for(int j = 0; j < 26; j++){
      v -= c.at(j) * (i + 1 - l.at(j));
    }
    cout << v << endl;
  }
}