#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	
	while (cin >> n) {
		bool prime[1000000];
		for (int i = 2;i <= n;i++) {
			prime[i] = true;
		}
		for (int i = 2;i <= sqrt(n);i++) {
			for (int j = i * 2;j <= n;j += i) {
				prime[j] = false;
			}
		}
		int count = 0;
		for (int i = 2;i <= n;i++) {
			if (prime[i] == true) count++;
		}
		cout << count << endl;
	}

}