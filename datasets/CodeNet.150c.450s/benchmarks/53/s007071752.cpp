#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <utility>
#include <numeric>
#include <queue>
#include <stack>

using ll = long long;
using namespace std;

constexpr int MOD = 1e9 + 7;
constexpr ll MOD_LL = ll(1e9 + 7);

template<typename T>
vector<T> prime_factorize(T n) {
	vector<T> ret;
	for(T i = 2; i * i <= n; ++i) {
		while( n % i == 0 ) {
			ret.push_back(i);
			n /= i;
		}
	}
	
	if( n != 1 ) ret.push_back(n);
	
	return ret;
}

int main(void) {
	int n;
	cin >> n;
	
	vector<int> primes = prime_factorize(n);
	
	cout << n << ":";
	for(int i = 0; i < (int)primes.size(); ++i) {
		cout << " " << primes[i];
	}
	
	cout << endl;
	
	return 0;
}

