#include <iostream>
#include <string>
#define OPEN 1
#define CLOSE 0
using namespace std;

int main() {
  int n;
  cin >> n;
  string u[n];
  for (int i = 0; i < n; i++)
    cin >> u[i];

  int m;
  cin >> m;
  int status = CLOSE;
  for (int i = 0; i < m; i++) {
    string t;
    cin >> t;
    int j;
    for (j = 0; j < n; j++) {
      if (t == u[j]) {
	if (status == CLOSE) {
	  cout << "Opened by " << t << endl;
	  status = OPEN;
	} else {
	  cout << "Closed by " << t << endl;
	  status = CLOSE;
	}
	break;
      }
    }
    if (j == n)	cout << "Unknown " << t << endl;
  }
}