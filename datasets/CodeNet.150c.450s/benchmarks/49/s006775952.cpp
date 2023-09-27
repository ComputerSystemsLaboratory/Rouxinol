#include <iostream>
using namespace std;

int N, S;
int main() {
  while (cin >> N && N > 0) {
    int sum = 0, max = 0, min = 1000;
    for (int i = 0; i < N; i++) {
      cin >> S;
      sum += S;
      if (S > max) max = S;
      if (S < min) min = S;
    }
    cout << (int)((sum-max-min)/(N-2)) << endl;
  }
}