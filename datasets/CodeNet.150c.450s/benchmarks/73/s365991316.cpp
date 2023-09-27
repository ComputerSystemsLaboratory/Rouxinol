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

const int maxN = 100001;

//1:indexed
class Bit{
private:
	int n;
	int dat[maxN + 1];

public:
	void init(int x){
		n = x;
	}

	int sum(int k){
		int ret = 0;
		while (k > 0){
			ret += dat[k];
			k -= k & -k;
		}
		return ret;
	}

	void add(int k, int x){
		while (k <= n){
			dat[k] += x;
			k += k & -k;
		}
	}
};

int n, q;
Bit bit;

int main(){
	std::cin >> n >> q;
	bit.init(n);
	rep(i, q){
		int a, b, c;
		std::cin >> a >> b >> c;
		if (a == 0)bit.add(b, c);
		else std::cout << bit.sum(c) - bit.sum(b - 1) << std::endl;
	}
	return 0;
}