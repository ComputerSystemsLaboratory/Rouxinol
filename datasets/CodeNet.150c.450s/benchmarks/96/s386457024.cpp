//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


class Keyboard {
  public:
    string input, output;
    vector<vector<char>> keyboard;
    string make_output();

    Keyboard(string input) : input(input) {
      // IMPORTANT: vector<vector<char>> keyboard;
      // ?????????????????§?????£??????????????¨??????????????°??¨?????????
      // ??¢??§??????????????????????????????????????¨???????????§??§???????????????
      keyboard.resize(10);

      keyboard[0] = vector<char>({'A'});
      keyboard[1] = vector<char>({'.', ',', '!', '?', ' '});
      keyboard[2] = vector<char>({'a', 'b', 'c'});
      keyboard[3] = vector<char>({'d', 'e', 'f'});
      keyboard[4] = vector<char>({'g', 'h', 'i'});
      keyboard[5] = vector<char>({'j', 'k', 'l'});
      keyboard[6] = vector<char>({'m', 'n', 'o'});
      keyboard[7] = vector<char>({'p', 'q', 'r', 's'});
      keyboard[8] = vector<char>({'t', 'u', 'v'});
      keyboard[9] = vector<char>({'w', 'x', 'y', 'z'});
    }

};

string Keyboard::make_output() {
  int curr;
  int prev = -1;
  int freq =  0;
  output = "";

  rep (i, input.size()) {
    curr = (int)input[i] - 48; // ascii code

    // ?????? or ??????
    if (curr == prev || prev == -1) freq++;

    // ??\????¢????
    if (curr == 0) {
      if (prev != -1) {
        freq--;
        int qindex = keyboard[prev].size();
        /* cout << "i, j: " << prev << "," << freq % qindex << endl; */
        /* cout << keyboard[prev][freq%qindex] << endl; */
        output += keyboard[prev][freq%qindex];
      }

      // ?????????
      prev = -1;
      freq = 0;
    }
    else prev = curr;
  }

  return output;
}

int main() {
  int n;
  string s;
  cin >> n;

  rep (i, n) {
    cin >> s;
    Keyboard k = Keyboard(s);
    cout << k.make_output() << endl;
  }

  return 0;
}