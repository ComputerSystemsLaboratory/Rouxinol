#include<iostream>
using namespace std;

// n個の重複しない整数(min ~ max)用いてsを表す組み合わせの数
int ci(int n, int s, int min, int max) {
  if (s < min || n < 1) return 0;
  if (n == 1) return (s > max)? 0: 1;
  int r = 0;
  for (int i=min; i<s && i<=max; i++) {
    r += ci(n - 1, s - i, i + 1, max);
  }
  return r;
}

int main() {
  while (true) {
    int n, s;
    cin >> n >> s;
    if (!n && !s) break;
    cout << ci(n, s, 0, 9) << endl;
  }
  return 0;
}
