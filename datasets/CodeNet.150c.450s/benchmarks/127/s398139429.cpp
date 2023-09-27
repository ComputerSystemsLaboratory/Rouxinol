#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

string s;
set<string> ans;
void solve(){
  ans.clear();
  for(int i = 0; i < s.size(); i++){
    string _s[2];
    _s[0] = s.substr(0,i);
    _s[1] = s.substr(i,s.size()-i);
    for(int j = 0; j < 4; j++){
      if(j==2)reverse(_s[0].begin(), _s[0].end());
      if(j)reverse(_s[1].begin(), _s[1].end());
      ans.insert(_s[0]+_s[1]);
      ans.insert(_s[1]+_s[0]);
    }
  }
  cout << ans.size() << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> s;
    solve();
  }
  return 0;
}