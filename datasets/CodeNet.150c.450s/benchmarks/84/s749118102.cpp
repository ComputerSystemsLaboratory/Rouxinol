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

const int maxN = 200001;

//1:indexed
class Bit{
public:
	int n;
	int dat[maxN + 1];

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

int n;
int a[maxN];
ll ans = 0;
Bit b;

std::map<int, int> map;

int main(){
	std::cin >> n;
	b.init(n);
	rep(i, n)scanf("%d", &a[i]), map[a[i]] = 0;
	
	int order = 1;
	std::map<int, int>::iterator it = map.begin();
	while (it != map.end()){
		it->second = order;
		++order;
		++it;
	}

	rep(i, n)a[i] = map[a[i]];

	rep(i, n)ans += (i - b.sum(a[i])), b.add(a[i], 1);
	std::cout << ans << std::endl;
	return 0;
}