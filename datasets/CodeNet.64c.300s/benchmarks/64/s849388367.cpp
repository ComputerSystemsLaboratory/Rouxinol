#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i,from,to) for(int i=from; i<to; ++i)
#define REP(i,from,to) for(int i=from; i<=to; ++i)
using namespace std;
template<typename T>
ostream& operator<<(ostream& out, const vector<vector<T> >& v) {
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i] << endl;
	}
	return out;
}
template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
	out << "[";
	size_t last = v.size() - 1;
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i];
		if (i != last) {
			out << ",";
		}
	}
	out << "]";
	return out;
}

int a, b;
int gcd(int x, int y) { //x>y
	if (x < y) {
		swap(x, y);
	}
	if (y == 0) {
		return x;
	} else {
		return gcd(y, x % y);
	}
}
void solve() {
	cin >> a >> b;
	cout << gcd(a, b) << endl;
}

int main() {
	solve();
}