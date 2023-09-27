#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

const bool Closed = false;
const bool Open = true;

int main() {
  int N, M;
  cin >> N;
  set<string> ids;
  REP(i, N) {
    string id;
    cin >> id;
    ids.insert(id);
  }

  bool door = Closed;
  
  cin >> M;
  REP(i, M) {
    string card;
    cin >> card;
    if (ids.find(card) == ids.end()) {
      cout << "Unknown " << card << endl;
    } else if (door == Closed) {
      cout << "Opened by " << card << endl;
      door = Open;
    } else {
      cout << "Closed by " << card << endl;
      door = Closed;
    }
  }
}