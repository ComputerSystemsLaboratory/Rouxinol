#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,m;
  while(true) {
    if(cin.eof()) break;
    cin >> n;
    if(n == 0) break;

    map<char,char> tables;
    char bf,en;
    for(int i=0;i<n;i++) {
      cin >> bf >> en;
      tables[bf] = en;
    }
    cin >> m;
    char c;
    for(int i=0;i<m;i++) {
      cin >> c;
      if(tables.count(c)) {
        c = tables[c];
      }
      cout << c;
    }
    tables.clear();
    cout << "\n";
  } // end while
}