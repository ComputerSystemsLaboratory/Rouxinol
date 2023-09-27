#include <iostream>
using namespace std;

char conv[128];

int main() {
  int n;
  while(cin >> n && n) {
    for(int i = 0; i < 128; ++i) conv[i] = i;
    for(int i = 0; i < n; ++i) {
      char a, b;
      cin >> a >> b;
      conv[a] = b;
    }
    int m;
    cin >> m;
    while(m--) {
      char c;
      cin >> c;
      cout << conv[c];
    }
    cout << endl;
  }
}