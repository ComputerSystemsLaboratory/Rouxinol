#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int N;
  while (cin >> N) {
    if (N == 0) break;
    int num[5000];
    for (int i = 0; i < N; i++) {
      cin >> num[i];
    }
    int m = num[0];
    for (int i = 0; i < N; i++) {
      int sum = 0;
      for (int j = i; j < N; j++) {
        sum += num[j];
        m = max(m, sum);
      }
    }
    cout << m << endl;
  }

  return 0;
}