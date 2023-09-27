#include <iostream>
#include <vector>

using namespace std;

int main() {
  while (true) {
    int N;
    int A;
    int B;
    int C;
    int X;

    int answer = 0;

    cin >> N >> A >> B >> C >> X;

    if (N == 0) { break; }

    vector<int> table(N);

    for (int i = 0; i < N; i++) {
      cin >> table[i];
    }

    for (int i = 0; i < N; i++) {
      bool should_break = false;

      while (true) {
        if (X == table[i]) {
          break;
        }

        if (answer >= 10000) {
          answer = -1;
          should_break = true;
          break;
        }

        X = (A * X + B) % C;
        answer++;
      }

    X = (A * X + B) % C;
      answer++;
      if (should_break) { break; }
    }

    cout << answer - 1 << endl;
  }


  return 0;
}