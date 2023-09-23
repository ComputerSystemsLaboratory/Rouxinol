#include <iostream>
using namespace std;

int a, d, n;
bool isPrime[1000001];

void setPrime() {
	for (int i = 0; i < 1000001; i++) isPrime[i] = true;
	isPrime[0] = isPrime[1] = false;
	
	for (int i = 2; i < 1000001; i++) {
		if (isPrime[i]) {
			for (int j = i * 2; j < 1000001; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

int main() {
	setPrime();
	
	while (cin >> a >> d >> n) {
		if (!a) break;
		
		int cnt = 0;
		for (int i = 0; ; i++) {
			if (isPrime[a + d * i]) cnt++;
			if (cnt == n) {
				cout << a + d * i << endl;
				break;
			}
		}
	}
	return 0;
}