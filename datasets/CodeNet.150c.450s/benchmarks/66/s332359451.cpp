#include <iostream>
#include <unordered_set>

#define REP(i, n) for(int (i) = 0; (i) < (n); i++)

using namespace std;

inline int nextInt()       { int d;    cin >> d; return d; }
inline string nextString() { string s; cin >> s; return s; }

int main() {
  int N = nextInt();
  
  unordered_set<string> IDs;
  
  REP(i, N) {
    string str = nextString();
    IDs.insert(str);
  }
  
  int M = nextInt();
  
  bool isOpen = false;
  REP(i, M) {
    string str = nextString();
    if (IDs.find(str) != IDs.end()) {
      // if ID found
      if (isOpen) {
        cout << "Closed by " << str << endl;
      } else {
        cout << "Opened by " << str << endl;
      }
      isOpen = !isOpen;
    } else {
      // Not found
      cout << "Unknown " << str << endl;
    }
  }
  
  return 0;
}