#include <iostream>
using namespace std;

int main() {
  bool check_prime[1000000] = {false};
  int n;

  for (int i=2; i < 1000; i++) {
    if (!check_prime[i]) {
      for (int j = i*i; j < 1000000; j+=i) {
        check_prime[j] = true;
      }
    }
  }

  while (cin >> n) {
    int answer = 0;
    for (int i = 2; i <= n; i++) {
      if (!check_prime[i]) { 
        answer++;
      }
    }
    cout << answer << endl;
  }

  return 0;
}