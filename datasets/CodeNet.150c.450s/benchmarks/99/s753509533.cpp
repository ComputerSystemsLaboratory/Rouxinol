#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define repa(i,s,e) for(int i=s; i<=e; i++)
#define repd(i,s,e) for(int i=s; i>=e; i--)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;

char mcxi[4] = { 'm', 'c', 'x', 'i' };
int dig[4] = { 1000, 100, 10, 1 };

int mcxi2num(string s) {
	int n = 0;

	rep(i,4) {
		int c = s.find_first_of(mcxi[i]);
		if(c != string::npos) {
			if(c == 0) {
				n += dig[i];
			} else {
				n += s[c-1] <= '9' ? dig[i] * (int)(s[c-1] - '0') : dig[i]; 
			}
		}
	}

	return n;
}

int main() {
	int n, m, x, y;
	string a, b;

	cin >> n;
	rep(i,n) {
		cin >> a >> b;
		x = mcxi2num(a);
		y = mcxi2num(b);
		m = x + y;
		rep(j,4) {
			int d = m / dig[j];
			if(d >= 2) cout << d;
			if(d >= 1) cout << mcxi[j];
			m = m - d * dig[j];
		}
		cout << endl;
	}
}