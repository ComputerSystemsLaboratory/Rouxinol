#include<iostream>
#include <sstream>
#define SSTR( x ) static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << x ) ).str()
using namespace std;

// n個の重複しない整数(min ~ max)用いてsを表す組み合わせの数
int ci(int n, int s, int min, int max, string str) {
  if (s < min || n < 1) return 0;
  if (n == 1) {
    if (s > max) return 0;
    //cout << str << s << endl;
    return 1;
  }
  int r = 0;
  for (int i=min; i<s && i<=max; i++) {
    r += ci(n - 1, s - i, i + 1, max, str + SSTR(i) + " ");
  }
  return r;
}

int main() {
  while (true) {
    int n, s;
    cin >> n >> s;
    if (!n && !s) break;
    cout << ci(n, s, 0, 9, "") << endl;
  }
  return 0;
}
