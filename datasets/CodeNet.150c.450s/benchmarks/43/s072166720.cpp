#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int n;
  cin >> n;
  while (n > 0) {
    int score_a = 0, score_b = 0;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      if (a > b) {
        score_a += (a+b);
      } else if (a < b) {
        score_b += (a+b);
      } else {
        score_a += a;
        score_b += b;
      }
    }
    cout << score_a << " " << score_b << endl;
    cin >> n;
  }

  
  return 0;
}