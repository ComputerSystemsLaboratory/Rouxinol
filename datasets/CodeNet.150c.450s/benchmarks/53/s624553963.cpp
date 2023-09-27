#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n) {
  	for (int i = 2; i <= sqrt(n); ++i) {
      	if (n % i == 0) {
          return false;
        }
    }
 	return true;
}

void solve(int n) {
    cout << n << ":" << flush;
  	if(isprime(n)) {
      	cout << " " << n << endl;
      return;
    }
 	while (n != 1) {
      	if (n % 2 == 0) {
          	n /= 2;
          	cout << " " << 2 << flush;
        } else {
          	for (int i = 3; i <= n; ++i) {
              if (n % i == 0) {
              		n /= i;
              		cout << " " << i << flush;
                break;
              }
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    solve(n);
}
