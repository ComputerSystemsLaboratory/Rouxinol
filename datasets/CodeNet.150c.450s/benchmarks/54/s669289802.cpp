#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int ans;
  string w, s;

  cin >> w;

  ans = 0;
  while (1) {
    cin >> s;
    if (s == "END_OF_TEXT") {
      break;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (w == s) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}

