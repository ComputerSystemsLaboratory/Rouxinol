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

int mcxi2num(string s) {
	int n = 0;
	int dig = 1000;

	for(int i=0; i<4; i++) {
		int c = s.find_first_of(mcxi[i]);
		if(c != string::npos) {
			if(c == 0) {
				n += dig;
			} else {
				n += s[c-1] <= '9' ? dig * (int)(s[c-1] - '0') : dig; 
			}
		}
		dig = dig / 10;
	}

	return n;
}

string num2mcxi(int m) {
	string s = "";
	for(int i=0; i<4; i++) {
		char c = (char)(m % 10);
		if(c != 0) {
			s = mcxi[4-i-1] + s;
		}

		if(c >= 2) {
			s = " " + s;
			s[0] = c + '0';
		}

		m = m / 10;
	}
	return s;
}

int main() {
	int n, x, y;
	string a, b;

	cin >> n;
	rep(i,n) {
		cin >> a >> b;
		x = mcxi2num(a);
		y = mcxi2num(b);
		cout << num2mcxi(x + y) << endl;
	}
}