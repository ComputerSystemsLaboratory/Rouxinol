#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
  int N, M;
  cin >> N;
  vector<string> U;
  string s;
  bool open, f;
  for (int i = 0; i < N; ++i) {
    cin >> s;
    U.push_back(s);
  }
  cin >> M;
  open = false;
  for (int i = 0; i < M; ++i) {
    cin >> s;
    f = true;
    for (int j = 0; j < N; ++j) {
      if (U[j] == s) {
	f = false;
	if (open) {
	  cout << "Closed by " << s << endl;
	  open = false;
	} else {
 	  cout << "Opened by " << s << endl;
	  open = true;
	}
      }
    }
    if (f) cout << "Unknown " << s << endl;
  }
}