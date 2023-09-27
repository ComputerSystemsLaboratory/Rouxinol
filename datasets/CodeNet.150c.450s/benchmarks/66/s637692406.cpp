#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  int n;
  cin>>n;
  vector<string> ids(n);
  REP(i,n)cin>>ids[i];
  bool opened = false;
  int m;
  cin>>m;
  REP(i,m){
    string s;
    cin>>s;
    auto itr = find(begin(ids),end(ids),s);
    if (itr == end(ids)) {
      cout << "Unknown " << s << endl;
    } else {
      if (opened) {
        cout << "Closed by " << s << endl;
      } else {
        cout << "Opened by " << s << endl;
      }
      opened = !opened;
    }
  }
  return 0;
}