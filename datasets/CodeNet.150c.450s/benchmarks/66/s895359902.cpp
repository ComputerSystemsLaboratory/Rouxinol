#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, int> U;
  for (int i = 0; i < N; i++) {
    string u;
    cin >> u;

    U[u] = 1;
  }

  bool open = false;

  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    string t;
    cin >> t;

    if (U[t] == 0) {
      cout << "Unknown ";
    } else {
      if (open) {
	cout << "Closed by ";
      } else {
	cout << "Opened by ";
      }
      open = !open;
    }

    cout << t << endl;
  }

  return 0;
}