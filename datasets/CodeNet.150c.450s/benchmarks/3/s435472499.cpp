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

int main(){
	std::string str;
	int n;
	std::cin >> str >> n;
	rep(i, n){
		int a, b;
		std::string s;
		std::cin >> s >> a >> b;
		if (s == "print")std::cout << str.substr(a, b - a + 1) << std::endl;
		else if (s == "reverse")std::reverse(str.begin() + a, str.begin() + b + 1);
		else {
			std::string c;
			std::cin >> c;
			rep(i, c.size())str[a + i] = c[i];
		}
	}
	return 0;
}