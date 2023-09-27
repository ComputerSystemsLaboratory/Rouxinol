#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()

#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)

typedef long long ll;
typedef pair<int, int> pii;

int s2n(string s)
{
	int n = 0;
	int d = 1;
	rep(i, s.size()) {
		int ch = s[i];
		if (isdigit(ch))
			d = ch-'0';
		else {
			switch(ch) {
			case 'm': n += d*1000; break;
			case 'c': n += d*100; break;
			case 'x': n += d*10; break;
			case 'i': n += d*1; break;
			}
			d = 1;
		}
	}
	return n;
}

string n2s(int n)
{
	string s = "";
	char cs[] = "mcxi";
	for (int i = 1000, j = 0; i >= 1; i /= 10, j++) {
		if (n >= i) {
			int k = n/i;
			n %= i;
			if (k != 1)
				s += k+'0';
			s += cs[j];
		}
	}
	return s;
}

int main(void)
{
	int n;
	cin >> n;
	rep(i, n) {
		char ss1[256], ss2[256];
		string s1, s2;
		scanf("%s %s", ss1, ss2);
		s1 = ss1, s2 = ss2;
		cout << n2s(s2n(s1)+s2n(s2)) << endl;
	}
	return 0;
}