#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < (int) (n); i++)
#define ALL(v) (v).begin(), (v).end()

using namespace std;

int main(){
  int n, m;
  cin >> n;
  string reg[n];
  REP(i, n) cin >> reg[i];
  cin >> m;
  string user;
  bool locked = true;
  REP(i, m) {
    cin >> user;
    bool find = false;
    REP(j, n) if(user == reg[j]) { find = true; locked = !locked; break; }
    if(find)
      cout << (locked ? "Closed" : "Opened") << " by " << user << endl;
    else cout << "Unknown " << user << endl;
  }
  return 0;
}