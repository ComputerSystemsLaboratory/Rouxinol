#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n, m;

  cin >> n;
  vector<string> u(n);
  for(int i = 0; i < n; i++) cin >> u[i];

  cin >> m;
  int cnt = 0;
  for(int i = 0; i < m; i++) {
    string t;
    cin >> t;
    bool b = true;
    for(int j = 0; j < n; j++) {
      if(u[j] == t) {
	if(cnt % 2 == 0) {
	  cout << "Opened by " << t << endl;
	  cnt++;
	  b = false;
	} else {
	  cout << "Closed by " << t << endl;
	  cnt++;
	  b = false;
	}
	if(!b) break;
      }
    }
    if(b) cout << "Unknown " << t << endl;
  }
}