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

const int max = 1000000010;
/*bool isPrime[max];

void init(){
	//rep(i, max)isPrime[i] = true;
	isPrime[0] = isPrime[1] = true;

	REP(i, 2, max){
		if (!isPrime[i]){
			for (int j = i * 2; j < max; j += i)isPrime[j] = true;
		}
	}
}*/

int main(){
	//init();

	int n;
	std::cin >> n;

	std::cout << n << ":";
	//if (!isPrime[n])std::cout << " " << n;
	//else{
		int cp = n;
		for (int i = 2; i * i <= cp; ++i){
			while (n % i == 0)n /= i, std::cout << " " << i;
		}
	//}
		if (n != 1)std::cout << " " << n;
	std::cout << std::endl;

	return 0;
}