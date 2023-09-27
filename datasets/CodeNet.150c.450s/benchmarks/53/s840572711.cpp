#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define pb push_back
#define all(v) (v).begin(), (v).end()
typedef long long lint;
typedef vector<int> vi;

const int mod = 1e9 + 7;

lint gcd(lint a, lint b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

lint lcm(lint a, lint b) {
	return a / gcd(a, b) * b;
}

// ?????????????????????????????????????????????
lint extgcd(lint a, lint b, lint& x, lint& y) {
	lint d = a;
	if (b != 0) {
		d = extgcd(b, a % b, y, x);
		y -= (a / b) * x;
	} else {
		x = 1; y = 0;
	}
	return d;
}

bool is_prime(lint n) {
	for (lint i = 2; i * i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

// n????´???° ???????????????unsorted
/*
vi divisor(lint n) {
	vi res;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			res.pb(i);
			if (n / i != i) res.pb(n / i);
		}
	}

	return res;
}*/
vector<lint> divisor(lint n) {
	vector<lint> res;
	deque<lint> d;

	lint i = sqrt(n);
	if (i * i == n) {
		d.push_back(i);
		i--;
	}
	for (; i > 0; --i) {
		if (n % i == 0){
			d.push_front(i);
			d.push_back(n / i);
		}
	}

	res.insert(res.begin(), d.begin(), d.end());
	return res;
}


// 2 * 2 * 3 * 5 * 5 * 5 = {2:2, 3:1,5:3} ???????????? map ????????£????????????
map<int, int> prime_factor(lint n) {
	map<int, int> res;
	for (int i = 2; i * i <= n; ++i) {
		while (n % i == 0) {
			++res[i];
			n /= i;
		}
	}

	if (n != 1) res[n] = 1;
	return res;
}

const int MAX_N = 202020;
int prime[MAX_N];
bool memo[MAX_N + 1];

// ?´???°?????¨?????? n??\???????´???°????????°?????????
int sieve(int n) {
	int p = 0;
	memset(memo, true, sizeof(memo));
	memo[0] = memo[1] = false;

	for (int i = 2; i <= n; ++i) {
		if (memo[i]) {
			prime[p++] = i;
			for (int j = i * 2; j <= n; j += i) {
				memo[j] = false;
			}
		}
	}

	return p;
}

const lint MAX_LEN = 1000000;
const lint MAX_SQRT_B = 1000000;
bool memo_all[MAX_LEN];         //i means i + a
bool memo_small[MAX_SQRT_B];

// [a, b)????´???°????????°???????????????
lint count_prime(lint a, lint b) {
	for (int i = 0; (lint)i * i < b; i++) memo_small[i] = true;
	for (int i = 0; i < b - a; i++)     memo_all[i] = true;

	for (int i = 2; (lint)i * i < b; i++) {
		if (memo_small[i]) {
			for (int j = 2; (lint)j * j < b; j += i) memo_small[j] = false;
			for (lint j = max(2LL, (a + i - 1) / i) * i; j < b; j += i) memo_all[j - a] = false;
		}
	}

	lint ret = 0;
	for (lint i = a; i < b; i++) {
		if (memo_all[i]) ret++;
	}
	return ret;
}

// k???????????§????????£??????????????°??????{a_0 : 0, a_1 : 1, a_2 : 1, ... }
lint Fib[101010];
int calcFib(int k) {
	Fib[0] = 0;
	Fib[1] = Fib[2] = 1;
	for (int i = 3; i <= k; ++i) {
		Fib[i] = Fib[i - 1] + Fib[i - 2];
		// Fib[i] %= mod;
	}

	return Fib[k];
}


int main() {
	lint n;
	cin >> n;

	cout << n << ":";
	map<int, int> po = prime_factor(n);
	for (auto u : po) {
		rep(_, u.second){
			cout << " " << u.first;
		}
	}
	
	cout << endl;
}