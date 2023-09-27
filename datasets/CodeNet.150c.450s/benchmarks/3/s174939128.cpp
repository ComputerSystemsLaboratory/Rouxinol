#include <iostream>
#include <string>

using namespace std;

int main() {
  string str, op;
  cin >> str;
  int q;
  cin >> q;
  for(int i=0; i<q; i++) {
    cin >> op;
    if(op == "replace") {
      int s, e;
      string c;
      cin >> s >> e;
      cin >> c;

      int pos=0;
      for(int j=s; j<=e; j++) {
        str[j] = c[pos];
        pos++;
      }
    }
    else if(op == "reverse") {
      int s, e;
      cin >> s >> e;
      char tmp;
      while(s < e) {
        tmp = str[s];
        str[s] = str[e];
        str[e] = tmp;
        s++;
        e--;
      }
    }
    else {
      int s, e;
      cin >> s >> e;
      for(int j=s; j<=e; j++) {
        cout << str[j];
      }
      cout << endl;
    }
  }
  return 0;
}