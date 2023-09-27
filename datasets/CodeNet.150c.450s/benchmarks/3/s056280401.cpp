#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int q; cin >> q;
  for(int i = 0; i < q; i++){
    string type; cin >> type;
    if(type == "print"){
      int a, b; cin >> a >> b;
      cout << ::string(s.begin() + a, s.begin() + b + 1) << endl;
    }
    else if (type == "reverse"){
      int a, b; cin >> a >> b;
      reverse(s.begin() + a, s.begin() + b + 1);
    }
    else if (type == "replace"){
      int a, b; cin >> a >> b;
      string p; cin >> p;
      s.replace(s.begin() + a, s.begin() + b + 1, p);
    }
  }
}

