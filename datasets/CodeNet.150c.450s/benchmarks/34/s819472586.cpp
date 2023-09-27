#include <iostream>

using namespace std;

typedef long long ll;
ll memo[31];

ll f(int n) {
  if (n == 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 4;
  if (memo[n]) {
    return memo[n];
  }
  return memo[n] = f(n-1) + f(n-2) + f(n-3);
}



int main() {
  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    cout << f(n) / 10 /365  + 1<< endl;


  }

  return 0;
}