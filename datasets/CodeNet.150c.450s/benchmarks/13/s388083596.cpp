#include <iostream>
#include <string>

using namespace std;

int main(){
  string s, p;
  cin >> s >> p;
  string ss = s + s;
  bool flag = false;
  for (int i = 0; i < ss.length(); i++) {
    if (ss[i] == p[0]) {
      flag = true;
      for (int j = 1; j < p.length(); j++) {
        if (ss[i+j] != p[j]) {
          flag = false;
          break;
        }
      }
      if (flag) break;
    }
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}