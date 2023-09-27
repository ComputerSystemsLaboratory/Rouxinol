#include <iostream>
#include <string>
using namespace std;

int main() {
  int cnt = 0, res[10000] = {0};
  while (true) {
    string s;
    cin >> s;
    if (s == "0")
      break;
    else {
      for (int i=0;i<s.size();i++)
        res[cnt] += (int)(s[i] - '0');
      cnt++;
    }
  }
  for (int i=0;i<cnt;i++)
    cout << res[i] << endl;
}

