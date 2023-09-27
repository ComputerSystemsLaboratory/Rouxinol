#include "bits/stdc++.h"

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

using namespace std;

using LL = long long int;
using LD = long double;

using pii = pair<int, int>;
using pll = pair<LL, LL>;
using pdd = pair<double, double>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vl = vector<LL>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vd = vector<double>;
using vvd = vector<vd>;
using vs = vector<string>;
using vb = vector<bool>;
using vvb = vector<vb>;

const int INF = (1 << 30) - 1;
const LL INF64 = ((LL)1 << 62) - 1;
const double PI = 3.1415926535897932384626433832795;

const int dy[] = { 0, 1, 0, -1 };
const int dx[] = { 1, 0, -1, 0 };

int gcd(int x, int y) { return y ? gcd(y, x % y) : x; }
LL gcd(LL x, LL y) { return y ? gcd(y, x % y) : x; }

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	stack<int> s1;
	stack<pii> s2;

	int sum = 0;
	char ch;

	for (int i = 0; cin >> ch; i++) {
		if (ch == 'e') {
			break;
		}

		switch (ch) {
			case '\\' :
				s1.push(i);
				break;
			case '/' :
				if (s1.empty()) {
					break;
				}

				int j = s1.top(); s1.pop();
				sum += i - j;
				int r = i - j;

				while (!s2.empty() && s2.top().first > j) {
					r += s2.top().second; s2.pop();
				}

				s2.push(make_pair(j, r));
				break;
		}
	}

	vi puddles;
	while (!s2.empty()){
		puddles.push_back(s2.top().second); s2.pop();
	}
	reverse(ALL(puddles));

	cout << sum << endl;

	cout << puddles.size();
	for (int i = 0; i < puddles.size(); i++) {
		cout << " ";
		cout << puddles[i];
	}
	cout << endl;
	return 0;
}