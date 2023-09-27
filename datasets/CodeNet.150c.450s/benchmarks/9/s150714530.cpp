#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; int m;
  while(true){
    cin >> s;
    if(s == "-") break;
    cin >> m;
    for(int i = 0; i < m; i++){
      int h; cin >> h;
      s.insert(s.end(), s.begin(), s.begin() + h);
      s.erase(s.begin(), s.begin() + h);
      /*
      string s1 = s.substr(0, h);
      string s2 = s.substr(h, (int)s.size() - h);
      s = s2 + s1;
      */
    }
    cout << s << endl;
  }
}

