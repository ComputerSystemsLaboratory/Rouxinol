#include <bits/stdc++.h>

// gcd,lcm,素因数分解,ax + by = k,euler_phi
using namespace std;
template<typename T>
class Integer {
public:
	T gcd(T a,T b) {
		if (a < b) swap(a,b);
 		return b != 0 ? gcd(b, a % b) : a;
	}

	T lcm(T a,T b) {
  		return (a / gcd(a, b))*b;
	}

	map<T,int> getFactMap(T n) { // 素因数分解 key->因数 val->因数の数
		map<T,int> fact;
		T maxiter = (T)(sqrt(n) + 1);
		T div = 2;
		while (div < maxiter && n != 1) {
			if (!(n % div)) {
				fact[div]++;
				n /= div;
			}
			else div++;
		}
		if (n != 1) fact[n]++;
		return fact;
	}

	vector<T> getFactVec(T n) {
		vector<T> fact;
		T maxiter = (T)(sqrt(n) + 1);
		T div = 2;
		while (div < maxiter && n != 1) {
			if (!(n % div)) {
				fact.push_back(div);
				n /= div;
			}
			else div++;
		}
		if (n != 1) fact.push_back(n);
		return fact;
	}

	pair<T,T> exEuclid(T a,T b,T k = 1) {
		if (k != 1) {
			T g = gcd(a,b);
			a /= g; b /= g;
		}
		T div,mod,cc = 1,gg = 1,ee = 0,ff = 0,hh,ii;
		while (b) {
			div = a / b;mod = a % b;
			hh = cc - div * ee;
			ii = ff - div * gg;
			swap(a,b);
			b = mod;
			swap(cc,ee);
			ee = hh;
			swap(ff,gg);
			gg = ii;
		}
		return make_pair(cc,ff);
	}
};

int main(void) {
	Integer<int> it;
	int n;
	cin >> n;
	vector<int> ans = it.getFactVec(n);
	cout << n << ":";
	for (int i = 0;i < ans.size();i++) {
		cout << " " << ans[i];
	}
	cout << endl;
}
