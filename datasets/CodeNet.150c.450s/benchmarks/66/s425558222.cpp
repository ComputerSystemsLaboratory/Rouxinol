#include <iostream>
#include <map>
#define REP(i, a, n) for(int i = ((int) a); i < ((int) n); i++)
using namespace std;

int N, M;
string S;
map<string, bool> p;
bool s;

int main(void) {
  cin >> N;
  REP(i, 0, N) {
    cin >> S;
    p[S] = false;
  }
  cin >> M;
  s = false;
  REP(i, 0, M) {
    cin >> S;
    if(p.count(S)) {
      if(s == false) {
        cout << "Opened by " << S << endl;
        s = true;
      } else {
        cout << "Closed by " << S << endl;
        s = false;
      }
    } else {
      cout << "Unknown " << S << endl;
    }
  }
}