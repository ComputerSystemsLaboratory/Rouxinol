#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

struct mcxi_t {
  uint32_t m = 0;
  uint32_t c = 0;
  uint32_t x = 0;
  uint32_t i = 0;

  mcxi_t(string str) {
    uint32_t val = 1;
    for (uint32_t j = 0; j < str.size(); j++) {
      switch (str[j]) {
      case 'm':
        m = val;
        val = 1;
        break;
      case 'c':
        c = val;
        val = 1;
        break;
      case 'x':
        x = val;
        val = 1;
        break;
      case 'i':
        i = val;
        val = 1;
        break;
      default:
        val = str[j] - '0';
        break;
      }
    }
  }

  const mcxi_t operator+(const mcxi_t &mcxi) {
    mcxi_t added("");
    added.i = i + mcxi.i;
    added.x = x + mcxi.x;
    added.c = c + mcxi.c;
    added.m = m + mcxi.m;
    if (added.i >= 10) {
      added.i %= 10;
      added.x++;
    }
    if (added.x >= 10) {
      added.x %= 10;
      added.c++;
    }
    if (added.c >= 10) {
      added.c %= 10;
      added.m++;
    }
    return added;
  }

  void print_digit(int32_t val, char disp) {
    if (val == 1) {
      cout << disp;
    } else if (val >= 2) {
      cout << val << disp;
    }
  }

  void println() {
    print_digit(m, 'm');
    print_digit(c, 'c');
    print_digit(x, 'x');
    print_digit(i, 'i');
    cout << endl;
  }
};

int32_t main() {
  uint32_t n;
  cin >> n;
  for (uint32_t i = 0; i < n; i++) {
    string str1, str2;
    cin >> str1 >> str2;
    mcxi_t mcxi = mcxi_t(str1) + mcxi_t(str2);
    mcxi.println();
  }

  return 0;
}