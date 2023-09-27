#include <iostream>
#define N 10000
#define M 10000
#define sqrtM 32

using namespace std;

bool is_prime[M+1];
int input[N];
int n;

void load(void) {
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> input[i];
	}
}

int main(void) {
	// make primes
	for(int i = 2; i <= M; ++i) {
		is_prime[i] = true;
	}

	for(int i = 2; i <= sqrtM; ++i) {
		if(!is_prime[i]) continue;
		for(int j = 2*i; j <= M; j += i) {
			is_prime[j] = false;
		}
	}

	load();
	int cnt = 0;

	for(int i = 0; i < n; ++i) {
		bool flag_prime = true;
		int x = input[i];
		for(int j = 2; j <= M; ++j) {
			if(!is_prime[j]) continue;
			if(x != j && x % j == 0) {
				flag_prime = false;
				break;
			}
		}
		if(flag_prime) ++cnt;
	}

	cout << cnt << endl;

	return 0;
}