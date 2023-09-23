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

void call(int n){
	int i = 1, x;
	while (i <= n){
		x = i;
		if (x % 3 == 0)std::cout << " " << i;
		else while (x){
			if (x % 10 == 3){
				std::cout << " " << i;
				break;
			}
			x /= 10;
		}
		++i;
	}
	std::cout << std::endl;
}

int main(){
	int n;
	std::cin >> n;
	call(n);
	return 0;
}