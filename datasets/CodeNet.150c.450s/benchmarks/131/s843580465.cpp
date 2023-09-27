#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <complex>
#include <vector>
#include <bitset>
#include <cstdio>
#include <cmath>
#include <time.h>
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) ((c).rbegin(),(c).rend())
//#define sort(v,n) sort(v,v+n)
#define ll long long
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int b[7];
int a, l;

inline void digit(int a) {
	int now = 0;
	int nowl = 0;
	for (int i = 0; i < 7; i++)b[i] = 0;
	while (a > 0 && nowl<l) {
		if (a <= 0) {
			b[now] = 0;
			continue;
		}
		b[now++] = a % 10;
		a /= 10;
		nowl++;
	}
}

inline int tsunagu() {
	int ans=0;
	for (int now = 0; now < l; now++) {
		ans *= 10;
		ans += b[now];
	}
	return ans;
}

int main() {
	while (cin >> a >> l, l) {
		map<int, int> mp;
		mp[a] = 1;
		for (int i = 0; i < 7; i++) {
			b[i] = 0;
		}
		int cont = 2;
		while (1) {
			//cout << a << endl;
			digit(a);
			sort(b, b + l);
			int mi = tsunagu();
			reverse(b, b + l);
			int ma = tsunagu();
			//cout << "ma" << ma << "mi" << mi <<"cont"<<cont<< endl;
			a = ma - mi;
			if (mp[a] > 0) {
				cout << mp[a]-1 << " " << a << " " << cont-mp[a] << endl;
				break;
			}
			else {
				mp[a] = cont++;
			}
		}
	}
	return 0;
}