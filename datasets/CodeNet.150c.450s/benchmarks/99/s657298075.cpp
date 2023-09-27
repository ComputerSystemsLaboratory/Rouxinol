#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "iomanip"
#include "random"

using namespace std;

const long long int MOD = 1000000007;
const long double EPS = 0.00000001;
const long double PI = 3.1415926535897932384626433;

long long int N, M, K, H, W, L, R;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		string s, t;
		cin >> s >> t;
		reverse(s.begin(), s.end());
		reverse(t.begin(), t.end());
		int a, b;
		a = 0;
		b = 0;
		int box = 0;
		for (auto j : s) {
			if (j == 'i') {
				if (box) {
					a += box;
				}
				box = 1;
			}
			else if (j == 'x') {
				if (box) {
					a += box;
				}
				box = 10;
			}
			else if (j == 'c') {
				if (box) {
					a += box;
				}
				box = 100;
			}
			else if (j == 'm') {
				if (box) {
					a += box;
				}
				box = 1000;
			}
			else {
				box *= j - '0';
				a += box;
				box = 0;
			}
		}
		a += box;
		box = 0;
		for (auto j : t) {
			if (j == 'i') {
				if (box) {
					b += box;
				}
				box = 1;
			}
			else if (j == 'x') {
				if (box) {
					b += box;
				}
				box = 10;
			}
			else if (j == 'c') {
				if (box) {
					b += box;
				}
				box = 100;
			}
			else if (j == 'm') {
				if (box) {
					b += box;
				}
				box = 1000;
			}
			else {
				box *= j - '0';
				b += box;
				box = 0;
			}
		}
		b += box;
		int c = a + b;
		while (c) {
			if (c >= 2000) {
				cout << c / 1000;
				c -= c / 1000 * 1000 - 1000;
			}
			if (c >= 1000) {
				cout << "m";
				c -= 1000;
			}
			if (c >= 200) {
				cout << c / 100;
				c -= c / 100 * 100 - 100;
			}
			if (c >= 100) {
				cout << "c";
				c -= 100;
			}
			if (c >= 20) {
				cout << c / 10;
				c -= c / 10 * 10 - 10;
			}
			if (c >= 10) {
				cout << "x";
				c -= 10;
			}
			if (c >= 2) {
				cout << c / 1 ;
				c -= c / 1 * 1 - 1;
			}
			if (c >= 1) {
				cout << "i";
				c -= 1;
			}
		}
		cout << endl;
	}
	return 0;
}