#include <iostream>

using namespace std;

int    nextInt()    { int d;      cin >> d;   return d;   }
string nextString() { string str; cin >> str; return str; }

string solve(string input) {
  string ret;

  char keys[][5] = {
    {},
    {'.', ',', '!', '?', ' '},
    {'a', 'b', 'c'},
    {'d', 'e', 'f'},
    {'g', 'h', 'i'},
    {'j', 'k', 'l'},
    {'m', 'n', 'o'},
    {'p', 'q', 'r', 's'},
    {'t', 'u', 'v'},
    {'w', 'x', 'y', 'z'}
  };
  
  int key_size[] = {
    -1, 5, 3, 3, 3, 3, 3, 4, 3, 4
  };
  
  char next = '\0';
  int idx = 0;
  for (int i = 0; i < input.size(); i++) {
    char c = input[i];
    if (c == '0') {
      if (next > 0 && next < 128) {
        ret += next;
      }
      next = '\0';
      idx = 0;
    } else {
      next = keys[c - '0'][idx];
      idx = (idx + 1) % key_size[c - '0'];
    }
  }
  
  return ret;
}

int main() {
  int n = nextInt();
  for (int i = 0; i < n; i++) {
    string input = nextString();
    cout << solve(input) << endl;
  }
  return 0;
}