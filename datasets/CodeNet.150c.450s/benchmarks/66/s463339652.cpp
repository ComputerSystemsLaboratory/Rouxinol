#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
  int n, m;
  vector<string> id;
  bool close = true;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    id.push_back(s);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    string s;
    cin >> s;
    if (find(id.begin(), id.end(), s) != id.end()) {
      if (close) {
        cout << "Opened by " << s << endl;
        close = false;
      } else {
        cout << "Closed by " << s << endl;
        close = true;
      }
    } else {
      cout << "Unknown " << s << endl;
    }
  }
  return 0;
}