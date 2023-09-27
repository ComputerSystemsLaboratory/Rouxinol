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

int n;
int a[101];

int selectionSort(){
	int ret = 0;
	rep(i, n - 1){
		int mini = i;
		REP(j, i + 1, n){
			if (a[j] < a[mini])mini = j;
		}
		if (mini != i)++ret;
		std::swap(a[i], a[mini]);
	}
	return ret;
}

int main(){
	std::cin >> n;
	rep(i, n)std::cin >> a[i];
	int ans = selectionSort();
	std::cout << a[0];
	REP(i, 1, n)std::cout << " " << a[i];
	std::cout << std::endl;
	std::cout << ans << std::endl;
	return 0;
}