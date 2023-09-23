#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>
#include <queue>
#include <set>
#include <map>
#include <numeric>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>

#define rep(i, a) REP(i, 0, a)
#define REP(i, a, b) for(int i = a; i < b; ++i)

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> P;
typedef std::pair<P, int> PP;
const double esp = 1e-9;
const int infi = (int)1e+9 + 10;
const ll infll = (ll)1e+17 + 10;

int n, m;
int a[1001][1001], b[1001];

int main(){
	std::cin >> n >> m;
	rep(i, n)rep(j, m)std::cin >> a[i][j];
	rep(i, m)std::cin >> b[i];
	rep(i, n){
		int sum = 0;
		rep(j, m)sum += a[i][j] * b[j];
		std::cout << sum << std::endl;
	}
	return 0;
}