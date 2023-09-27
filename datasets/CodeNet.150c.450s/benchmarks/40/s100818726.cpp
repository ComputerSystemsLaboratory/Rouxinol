#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };
 
int MOD = 1000000007;

void piyo(int& a, int& b, int& c, int& d) {
	int tmp = a;
	a = b;
	b = c;
	c = d;
	d = tmp;
}

void hoge(vector<int>& a, char c) {
	switch (c) {
	case 'W': piyo(a[0], a[2], a[5], a[3]); break;
	case 'S': piyo(a[0], a[4], a[5], a[1]); break;
	case 'N': piyo(a[0], a[1], a[5], a[4]); break;
	case 'E': piyo(a[0], a[3], a[5], a[2]); break;
	}
}

int main() {
	vector<int> a(6);
	for (int i = 0; i < 6; i++) cin >> a[i];
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++)
		hoge(a, s[i]);
	cout << a[0] << endl;
}