#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
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

typedef std::pair<std::string, int> MP;

int n, q;
std::queue<MP> que;

int main(){
	std::cin >> n >> q;

	rep(i, n){
		std::string name;
		int t;
		std::cin >> name >> t;
		que.push(MP(name, t));
	}

	int now = 0;
	while (!que.empty()){
		MP mp = que.front();
		que.pop();

		if (mp.second > q)que.push(MP(mp.first, mp.second - q)), now += q;
		else {
			std::cout << mp.first << " " << now + mp.second << std::endl;
			now += mp.second;
		}
	}

	return 0;
}