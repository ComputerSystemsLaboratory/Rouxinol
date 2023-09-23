#include <iostream>
using namespace std;

int main() {
  int N, M, P;

  while (cin >> N >> M >> P, N != 0) {
    int num = 0;
    int sum = 0;
    for (int i = 0; i < N; i++) {
      int X;
      cin >> X;

      if (i == M - 1) {
        num = X;
      }

      sum += X;
    }

    cout << (num != 0 ? sum * (100 - P) / num : 0) << endl;
  }

  return 0;
}