#define _USE_MATH_DEFINES

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <utility>
#include <climits>
#include <vector>
#include <map>
#include <queue>
using namespace std;

#define ll long long
const int MOD = 1000000007;//10^9+7
const string SPACE = " ";

ll max(ll a, ll b) {

	if (a > b)return a;
	else return b;

}
double max(double a, double b) {

	if (a > b)return a;
	else return b;

}
//a??¨b?????§?????????

ll min(ll a, ll b) {

	if (a < b)return a;
	else return b;

}
//a??¨b????°??????????

ll avd_i(ll a, ll b) {

	if (a > b)return a - b;
	else return b - a;

}
double avd_d(double a, double b) {

	double re;
	if (a > b)re = a - b;
	else re = b - a;
	return re;

}
//a??¨b???????????¶??????

ll powsur(ll a, ll b, ll p) {

	if (b == 0) {

		return 1;

	}
	else if (b % 2 == 0) {

		ll d = powsur(a, b / 2, p);
		return ((d%p)*(d%p)) % p;

	}
	else {

		return ((a%p)*powsur(a, b - 1, p) % p) % p;

	}

}
//p????´???°,a???b??????p??§?????£?????????

ll CMOD(ll n, ll r, ll p) {

	ll a = 1, b = 1, c = 1, re;
	for (int i = 1; i <= n; i++) {

		a *= i;
		a = a%p;

	}
	for (int i = 1; i <= r; i++) {

		b *= i;
		b = b%p;

	}
	for (int i = 1; i <= n - r; i++) {

		c *= i;
		c = c%p;

	}
	b = powsur(b, p - 2, p);
	c = powsur(c, p - 2, p);
	re = ((a%p)*(b%p)) % p;
	re = ((re%p)*c%p) % p;

	return re;

}
//p????´???°,(nCr)%p

ll gcd(ll a, ll b) {

	if (a > b) {

		ll tmp = a;
		a = b;
		b = tmp;

	}
	ll r;
	r = b%a;
	if (r == 0)return a;
	else return gcd(r, a);

}
//?????§??¬?´???°

ll lcm(ll a, ll b) {

	return (a / gcd(a, b))*b;

}
//????°???¬?????°

int main() {
	
	int r, c, table[105][105], asum[105], bsum[105], sum = 0;

	cin >> r >> c;
	for (int i = 0; i < r; i++)asum[i] = 0;
	for (int i = 0; i < c; i++)bsum[i] = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {

			cin >> table[i][j];
			asum[i] += table[i][j];
			bsum[j] += table[i][j];
			sum += table[i][j];

		}
	}

	for (int i = 0; i < r; i++) {

		for (int j = 0; j < c; j++) {

			cout << table[i][j] << " ";

		}
		cout << asum[i] << endl;

	}
	for (int i = 0; i < c; i++)cout << bsum[i] << " ";
	cout << sum << endl;

	return 0;
}