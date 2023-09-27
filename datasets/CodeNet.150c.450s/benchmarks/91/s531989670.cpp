#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
bool is_prime[1000100];

void search_prime(int n){
	for(int i = 0; i <= n; ++i)
		is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for(int i = 2; i <= n; ++i){
		if(is_prime[i]){
			primes.push_back(i);
			for(int j = i * 2; j <= n; j += i)
				is_prime[j] = false;
		}
	}
}

int main() {
	search_prime(1000050);
	int n;
	while(cin >> n){
		if(n == 0 && n == 1){
			cout << "0" << endl;
		}
		else{
			int idx = lower_bound(primes.begin(), primes.end(), n) - primes.begin();
			if(primes[idx] == n)
				idx++;
			cout << idx << endl;
		}
	}
	return 0;
}