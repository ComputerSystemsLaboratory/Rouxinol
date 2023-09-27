#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  set<string> U;
  for(int i = 0; i < N; ++i) {
    string id; cin >> id;
    U.insert(id);
  }
  int M; cin >> M;
  for(bool door = 0; M--; ) {
    string id; cin >> id;
    if(U.count(id)) {
      if(door) cout << "Closed by " << id << endl;
      else cout << "Opened by " << id << endl;
      door ^= 1;
    } else {
      cout << "Unknown " << id << endl;
    }
  }
  return 0;
}