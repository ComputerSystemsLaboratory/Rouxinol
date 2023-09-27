//
//  main.cpp
//

#include <algorithm>
#include <array>
#include <assert.h>
#include <complex>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <math.h>
#include <memory>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

using ll = int64_t;
using ull = uint64_t;

[[maybe_unused]] constexpr ll LL_MAX = numeric_limits<ll>::max();
[[maybe_unused]] constexpr ll LL_MIN = numeric_limits<ll>::min();
[[maybe_unused]] constexpr ull ULL_MAX = numeric_limits<ull>::max();

#define rep(i, a, b) for (ll i = (a); i < (b); i++)
#define rrep(i, a, b) for (ll i = (a)-1; i >= (b); i--)

template <typename T>
void chmin(T& x, T y) {
    x = min(x, y);
}

template <typename T>
void chmax(T& x, T y) {
    x = max(x, y);
}

ll csum(ll x, ll y) {
    if (x > 0 && y > 0 && x > LL_MAX - y) {
        return LL_MAX;
    }
    if (x < 0 && y < 0 && x < LL_MIN - y) {
        return LL_MIN;
    }
    return x + y;
}

template<typename T>
vector<T> make_vec_nd(T init, ll size) {
	return vector<T>(size, init);
}
template<typename T, typename... Args>
auto make_vec_nd(T init, ll size, Args... rest) {
	auto inner = make_vec_nd(init, rest...);
	return vector<decltype(inner)>(size, inner);
}

struct Basis {
	ll bit;
	ull vec;
};

ull residue(ull vec, vector<Basis>& basis) {
	for (Basis& b : basis) {
		if (vec & ((ull)1 << b.bit)) {
			vec ^= b.vec;
		}
	}
	return vec;
}

int main() {
	ll T;
	cin >> T;
	rep(t,0,T) {
		ll N;
		cin >> N;
		vector<ull> A(N);
		rep(i,0,N) {
			cin >> A[i];
		}
		string S;
		cin >> S;
		vector<Basis> basis;
		bool solved = false;
		rrep(i,N,0) {
			if (S[i] == '0') {
				ull res = residue(A[i], basis);
				if (res) {
					ll bit = 0;
					while ((res & ((ull)1 << bit)) == 0) {
						bit++;
					}
					basis.push_back(Basis{bit, res});
				}
			} else {
				if (residue(A[i], basis) != 0) {
					cout << 1 << endl;
					solved = true;
					break;
				}
			}
		}
		if (solved) {
			continue;
		}
		cout << 0 << endl;
	}
}

