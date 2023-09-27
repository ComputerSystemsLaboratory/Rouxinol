#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void exec(int n);

int main() {
  int tmp;
  while (1) {
    cin >> tmp;
    if (tmp == 0) {
      break;
    }
    exec(tmp);
  }
}

void exec(int n) {
  vector<int> scores(n);
  for (int i = 0; i < n; i++) {
    cin >> scores[i];
  }

  int min_diff = 1000000;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j)  {
        int diff = abs(scores[i] - scores[j]);
        min_diff = min_diff > diff ? diff : min_diff;
      }
    }
  }
  cout << min_diff << endl;
}