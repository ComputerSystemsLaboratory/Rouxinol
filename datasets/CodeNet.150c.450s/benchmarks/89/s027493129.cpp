#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int MAX_N = 1000000;

bitset<MAX_N> sieve;
vector<int> primes;
void eratosthenes(){
	sieve[0] = sieve[1] = true;
	for(int i = 2; i < MAX_N; ++i){
		if(sieve[i]){ continue; }
		primes.push_back(i);
		for(int j = i + i; j < MAX_N; j += i){ sieve[j] = true; }
	}
}

int main(){
	eratosthenes();
	while(true){
		int a, d, n;
		cin >> a >> d >> n;
		if(a == 0 && d == 0 && n == 0){ break; }
		int answer = 0;
		for(int i = a, c = 0; i < MAX_N; i += d){
			if(!sieve[i]){
				if(++c == n){ answer = i; break; }
			}
		}
		cout << answer << endl;
	}
	return 0;
}