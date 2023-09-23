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
		int m, f, r; cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1) break;
		char c;
		if (m == -1 || f == -1) c = 'F';
		else if (m + f >= 80) c = 'A';
		else if (m + f >= 65) c = 'B';
		else if (m + f >= 50) c = 'C';
		else if (m + f >= 30 && r >= 50) c = 'C';
		else if (m + f >= 30) c = 'D';
		else c = 'F';
		cout << c << endl;
	}
}