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

int n;
std::list<int> l;

int main(){
	scanf("%d", &n);
	rep(i, n){
		int x;
		char c[20];
		scanf("%s", &c);

		if (c[0] == 'i'){
			std::cin >> x;
			l.push_front(x);
		}
		else if (c[6] != 'F' && c[6] != 'L'){
			std::cin >> x;
			auto it = l.begin();
			while (it != l.end()){
				if (*it == x){
					it = l.erase(it);
					break;
				}
				++it;
			}
		}
		else if (c[6] == 'F')l.pop_front();
		else if (c[6] == 'L')l.pop_back();
	}

	auto it = l.begin();
	if (it != l.end())printf("%d", *it), ++it;
	while (it != l.end()){
		printf(" %d", *it);
		++it;
	}
	printf("\n");

	return 0;
}