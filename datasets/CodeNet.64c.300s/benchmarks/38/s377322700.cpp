#include <iostream>
#include <climits>

using namespace std;

bool Check(const int* input, int s, int left, int right) {
  if (s == 10) return true;
  bool ret = false;
  if (input[s] >= left) {
    ret = Check(input, s + 1, input[s], right);
    if (ret) return true;
  } else if (input[s] >= right) {
    ret = Check(input, s + 1, left, input[s]);
    if (ret) return true;
  }
  return false;
}

int main() {
  int input[10];
  int left, right;
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 10; ++j) {
      cin >> input[j];
    }
    if (Check(input, 0, INT_MIN, INT_MIN)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}