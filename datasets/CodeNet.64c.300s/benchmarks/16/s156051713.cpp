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
const double PI = 3.14159265358979323846;
const double esp = 1e-9;
const int infi = (int)1e+9 + 10;
const ll infll = (ll)1e+17 + 10;

const int maxN = 200001;

int n, s = -infi, ans = -infi;
int r[maxN];

int main(){
	std::cin >> n;
	rep(i, n)std::cin >> r[i];
	for (int i = n - 1; i >= 0; --i){
		ans = std::max(ans, s - r[i]);
		s = std::max(s, r[i]);
	}
	std::cout << ans << std::endl;
	return 0;
}