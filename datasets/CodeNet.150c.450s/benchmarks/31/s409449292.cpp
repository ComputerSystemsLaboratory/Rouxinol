#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int max_diff = -1000000000 + 1;
  int min_value;
  int current_value;

  cin >> current_value;
  min_value = current_value;

  for (int i = 1; i < n; i++) {
    cin >> current_value;

    if (max_diff < (current_value - min_value)) {
      max_diff = current_value - min_value;
    }

    if (current_value < min_value) {
      min_value = current_value;
    }
  }

  cout << max_diff << endl;
}
