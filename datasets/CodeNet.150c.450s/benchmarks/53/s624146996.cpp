#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <random>
#include <cmath>
#include <iomanip>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <list>
#include <unordered_map>
#include <bitset>
#include <sstream>
#include <new>
#include <typeinfo>
#include <iterator>


typedef long long ll;
typedef unsigned long long ull;
constexpr ll mop = 1000000007;
constexpr ll mop2 = 998244353;

using namespace std;

template <typename T>
map<T, T> prime_factor(T n) {
	map<T, T> res;
	for (T i = 2; i*i <= n; i++) {
		while (n%i == 0) {
			++res[i];
			n /= i;
		}
	}
	if (n != 1) {
		res[n] += 1;
	}
	return res;
}


int main() {
	ll n;
	cin >> n;
	map<ll, ll> ans;
	ans = prime_factor(n);
	cout << n << ":";
	for (auto i : ans) {
		ll numRep = i.second;
		for (ll j = 0; j < numRep; j++) {
			cout << " " << i.first;
		}
	}
	cout << endl;
}

