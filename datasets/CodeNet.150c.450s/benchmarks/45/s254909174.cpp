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
T modpow(T a, T p, T mod) {
	T ret = 1;
	while( p ) {
		if( p & 1 ) {
			ret *= a;
			ret %= mod;
		}
		
		a *= a;
		a %= mod;
		p >>= 1;
	}
	
	return ret;
}

int main(void) {
	ll m, n;
	cin >> m >> n;
	
	cout << modpow(m, n, MOD_LL) << endl;
	
	return 0;
}

