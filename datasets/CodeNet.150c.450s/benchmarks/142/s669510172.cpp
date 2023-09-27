#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <typeinfo>
#include <numeric>
#include <functional>
#include <unordered_map>
#include <bitset>
#include <stack>


using namespace std;
using ll = long long;
using ull = unsigned long long;

const ll INF = 1e16;
const ll MOD = 1e9 + 7;

#define REP(i, n) for(ll i = 0; i < n; i++)





















int main() {
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);
	REP(i, n) {
		cin >> a[i];
		if (i >= k) {
			cout << ((a[i - k] < a[i]) ? "Yes" : "No") << endl;
		}
	}
}