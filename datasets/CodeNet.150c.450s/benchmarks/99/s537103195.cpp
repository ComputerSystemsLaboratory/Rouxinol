#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double root2 = sqrt(2);
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	int n;
	cin >> n;
	string s; int l;
	for (int i = 0; i < n; i++) {
		int a, b,memo;
		a = 0; b = 0;
		cin >> s;
		l = s.length();
		memo = 1;
		for (int j = 0; j < l; j++) {
			if (0 <= s[j] - '0'&&s[j] - '0' <= 9) {
				memo = s[j] - '0';
			}
			else if (s[j] == 'm') {
				a += memo * 1000; memo = 1;
			}
			else if (s[j] == 'c') {
				a += memo * 100; memo = 1;
			}
			else if (s[j] == 'x') {
				a += memo * 10; memo = 1;
			}
			else if(s[j]=='i'){
				a += memo;
			}
		}
		cin >> s;
		l = s.length();
		memo = 1;
		for (int j = 0; j < l; j++) {
			if (0 <= s[j] - '0'&&s[j] - '0' <= 9) {
				memo = s[j] - '0';
			}
			else if (s[j] == 'm') {
				b += memo * 1000; memo = 1;
			}
			else if (s[j] == 'c') {
				b += memo * 100; memo = 1;
			}
			else if (s[j] == 'x') {
				b += memo * 10; memo = 1;
			}
			else if (s[j] == 'i') {
				b += memo;
			}
		}
		int x = a + b;
		if (x / 1000 >= 2)cout << x / 1000;
		if (x / 1000 >= 1)cout << "m";
		x %= 1000;
		if (x / 100 >= 2)cout << x / 100;
		if (x / 100 >= 1)cout << "c";
		x %= 100;
		if (x / 10 >= 2)cout << x / 10;
		if (x / 10 >= 1)cout << "x";
		x %= 10;
		if (x >= 2)cout << x;
		if (x >= 1)cout << "i";
		cout << endl;
	}
	return 0;
}

