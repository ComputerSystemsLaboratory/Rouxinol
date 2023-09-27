#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(){
  int m;
  cin >> m;
  
  string s;
  for(int i=0; i<m; i++){
    cin >> s;
    set<string> S;
    S.insert(s);
    for(int j=0; j<s.size(); j++){
      string t1 = s.substr(0, j+1), t2 = s.substr(j+1);
      string t1_ = t1;
      S.insert(t2 + t1);
      reverse(t1.begin(), t1.end());
      S.insert(t1 + t2);
      S.insert(t2 + t1);
      reverse(t2.begin(), t2.end());
      S.insert(t1_ + t2);
      S.insert(t2 + t1_);
      S.insert(t1 + t2);
      S.insert(t2 + t1);
    }
    cout << S.size() << endl;
  }
  
  return 0;
}