#include <iostream>
using namespace std;

int MAX = 1000001;
int prime[1000001] = {};

void make_prime(){
  int i, j;

  for (i = 2; i < MAX; i++) {
    prime[i] = 1;
  }

  for (i = 2; i * i < MAX; i++) {
    if (prime[i]){
      for (j = i * 2; j < MAX; j += i) {
        prime[j] = 0;
      }
    }
  }
}

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  make_prime();
  int i, input, count;

  while (cin >> input) {
    count = 0;
    for (i = 0; i <= input; i++) {
      if (prime[i] == 1) { count += 1; }
    }
    cout << count << endl;
  }

  return 0;
}