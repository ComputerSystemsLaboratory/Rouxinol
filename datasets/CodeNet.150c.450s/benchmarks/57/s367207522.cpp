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

int main() {
	for (;;) {
		int a, b; string s; cin >> a >> s >> b;
		if (s == "+") cout << a + b << endl;
		if (s == "-") cout << a - b << endl;
		if (s == "*") cout << a * b << endl;
		if (s == "/") cout << a / b << endl;
		if (s == "?") break;
	}
}