#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <functional>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <numeric>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#include <sstream>

#define rep(i, a) REP(i, 0, a)
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define rrep(i, a) RREP(i, a, 0)
#define RREP(i, a, b) for(int i = a; i >= b; --i)
#define repll(i, a) REPLL(i, 0, a)
#define REPLL(i, a, b) for(ll i = a; i < b; ++i)
#define rrepll(i, a) RREPLL(i, a, 0)
#define RREPLL(i, a, b) for(ll i = a; i >= b; --i)

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> P;
typedef std::pair<int, P> PP;
const double PI = 3.14159265358979323846;
const double esp = 1e-9;
const int infi = (int)1e+9 + 10;
const ll infll = (ll)1e+18 + 10;

int n, k;
int w[100001];
int l = 0, r;

int main(){
	std::cin >> n >> k;
	rep(i, n)std::cin >> w[i], r += w[i];

	while (l <= r){
		int m = (l + r) / 2;

		bool f = true;
		int need = 1, sum = 0;
		rep(i, n){
			if (w[i] > m)f = false;

			if (sum + w[i] <= m)sum += w[i];
			else {
				++need;
				sum = w[i];
			}
		}
		if (!f || need > k)l = m + 1;
		else r = m - 1;
	}

	std::cout << r + 1 << std::endl;

	return 0;
}