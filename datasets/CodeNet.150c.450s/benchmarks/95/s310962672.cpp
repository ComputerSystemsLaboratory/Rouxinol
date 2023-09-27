#include <iostream>
#include <string>
using namespace std;

const int DEF = -1;
const int LU = 0;
const int RU = 1;
const int LD = 2;
const int RD = 3;
const int NEXT[] = {RU, LU, RD, LD};

int main() {
  int n;

  while (cin >> n, n != 0) {
    int cnt = 0;
    int state = DEF;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;

      int cmd = s == "lu" ? LU : s == "ru" ? RU : s == "ld" ? LD : RD;
      if (state != DEF && cmd == NEXT[state]) {
	cnt++;
	state = DEF;
	continue;
      }

      state = cmd;
    }

    cout << cnt << endl;
  }

  return 0;
}