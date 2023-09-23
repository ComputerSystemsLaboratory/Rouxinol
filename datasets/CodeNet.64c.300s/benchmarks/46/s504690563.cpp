#include <iostream>
using namespace std;

bool prime[1000001];

void is_prime(int n){
	for(int i = 0; i <= n; ++i)
		prime[i] = true;
		
	prime[0] = prime[1] = false;
	for(int i = 2; i <= n; ++i){
		if(prime[i]){
			for(int j = i * 2; j <= n; j += i)
				prime[j] = false;
		}
	}
}

int main() {
	is_prime(1000000);
	
	int a, d, n;
	while(cin >> a >> d >> n && (a || d || n)){
		int c = 0, sum = a;
		while(1){
			if(prime[sum])
				c++;
			if(c == n)
				break;
			sum += d;
		}
		cout << sum << endl;
	}
	return 0;
}