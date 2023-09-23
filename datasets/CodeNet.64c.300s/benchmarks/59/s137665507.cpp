#include <iostream>
#include <math.h>

using namespace std;

int is_prime(int num) {
  double l = sqrt((double)num);
  for (int i = 2; i <= l; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    cnt += is_prime(num);
  }

  cout << cnt << endl;
  return 0;
}