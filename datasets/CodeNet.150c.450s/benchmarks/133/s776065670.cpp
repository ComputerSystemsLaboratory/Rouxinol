#include <bits/stdc++.h>
using namespace std;
int main() {
  int D;
  cin >> D;
  vector<int>c (26);
  for(int i = 0;i < 26;i++){
    cin >> c.at(i);
  }
  vector<vector<int>> s(D, vector<int>(26));
  for(int i = 0;i < D;i++){
    for(int j = 0;j < 26;j++){
      cin >> s.at(i).at(j);
    }
  }
  long long int Sa = 0;
  int d = 0;
  vector<int>last (26);
  for(int i = 0;i < 26;i++){
    last.at(i) = 0;
  }
  for(int i = 0;i < D;i++){
    int type = -1;
    d += 1;
    //ここにプログラムを追記
    cin >> type;
    last.at(type - 1) = d;
    Sa += s.at(d - 1).at(type - 1);
    for(int i = 0;i < 26;i++){
      Sa -= c.at(i) * (d - last.at(i));
    }
    //ここから先は変更しない
    cout << Sa << endl;
  }
}