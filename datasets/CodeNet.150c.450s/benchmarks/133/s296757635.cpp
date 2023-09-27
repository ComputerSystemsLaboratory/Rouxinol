#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int D;
  cin >> D;
  
  vector<int> c(27), tmp(27);
  vector<vector<int>> s(D+1 , vector<int>(27));
  for (int i = 1; i <= 26; i++)  cin >> c.at(i);
  for (int i = 1; i <= D; i++)  for(int j = 1; j <= 26; j++)  {
    cin >> s.at(i).at(j);
  }
  
  vector<int> last(27);
  for (int i = 1; i <= 26; i++) last.at(i) = 0;
  
  vector<int> t(D+1);
  for (int i = 1; i <= D; i++)  cin >> t.at(i);
  
  int sf;
  for (int i = 1; i <= D; i++) {
    sf += s.at(i).at(t.at(i));
    last.at(t.at(i)) = i;
    
    for (int j = 1; j <= 26; j++) {
      sf -=c.at(j)*(i-last.at(j));
    }
    
    
    cout << sf << endl;
    
  }
  
}