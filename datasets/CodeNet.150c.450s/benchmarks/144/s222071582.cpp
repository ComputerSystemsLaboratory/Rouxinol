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

int n, m, l;
ll a[101][101], b[101][101];

int main(){
	std::cin >> n >> m >> l;
	rep(i, n)rep(j, m)std::cin >> a[i][j];
	rep(i, m)rep(j, l)std::cin >> b[i][j];
	rep(i, n){
		rep(j, l){
			ll sum = 0;
			rep(k, m)sum += a[i][k] * b[k][j];
			if (j != l - 1)std::cout << sum << " ";
			else std::cout << sum;
		}
		std::cout << std::endl;
	}
	return 0;
}