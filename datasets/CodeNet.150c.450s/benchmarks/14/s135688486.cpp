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
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			cout << ' ' << i;
			continue;
		}
		for (int x = i; x > 0; x /= 10)
			if (x % 10 == 3) {
				cout << ' ' << i;
				break;
			}
	}
	cout << endl;
}