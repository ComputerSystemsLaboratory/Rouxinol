#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int D;
  cin >> D;
  
  vector<int> c(26);
  for (int i = 0; i < 26; i++) {
    cin >> c.at(i);
  }
  
  vector<vector<int>> s(D, vector<int>(26));

  // 入力 (2重ループを用いる)
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s.at(i).at(j);
    }
  }
  
  vector<int> t(D);
  for (int i = 0; i < D; i++) {
    cin >> t.at(i);
  }
  
  int man = 0;
  vector<int> last(26,0);
  for(int i=0; i<D; i++){
    int kaisai = t.at(i) - 1;
    man += s.at(i).at(kaisai);
    
    last.at(kaisai) = i+1;
    
    for(int j=0; j<26; j++){
      man -= c.at(j)*(1 + i - last.at(j));
	}
    
    cout << man << endl;
  }
  
  return 0; 
}