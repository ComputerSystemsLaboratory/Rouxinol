#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string W;
  cin >> W;

  int ans = 0;
  while (1) {
    string T;
    cin >> T;
    if (T == "END_OF_TEXT") {
      break;
    }

    for (int i = 0; i < T.size(); i++) {
      T[i] = tolower(T[i]);
    }

    if (W == T) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}

