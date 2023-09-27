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

int main(void) {
	int n;
	cin >> n;
	
	map<ll, ll> mp;
	for(ll x = 1; x < 101; ++x) {
		for(ll y = 1; y < 101; ++y) {
			for(ll z = 1; z < 101; ++z) {
				ll v = x * x + y * y + z * z + x * y + y * z + z * x;
				mp[v]++;
			}
		}
	}
	
	for(int i = 1; i <= n; ++i) {
		cout << mp[i] << endl;
	}
	
	return 0;
}
