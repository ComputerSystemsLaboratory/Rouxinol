#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, p; cin >> s >> p;
  int n = s.size();
  int m = p.size();
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(s[(i + j) % n] != p[j]) break;
      if(j == m - 1){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}

