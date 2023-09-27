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
	string s, p; cin >> s >> p;
	int S = s.length(), P = p.length();
	for (int i = 0; i < S; i++)
		for (int j = 0; j <= P; j++)
			if (j == P) {
				cout << "Yes" << endl;
				return 0;
			}
			else if (s[(i + j) % S] != p[j]) break;
	cout << "No" << endl;
}