#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

template<typename t1, class t2>
void input(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cin >> array[i];
	}
}

template<typename t1, class t2>
void output(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cout << array[i];
		if(i != count - 1) cout << " ";
	}
	cout << endl;
}

ll gcd(ll a,ll b) {
	int x = min(a,b),y = max(a,b);
	if(x == 0) return y;
	else return gcd(x,y % x);
}

set<ll> prime;

bool isPrime(ll x) {
	for(auto e:prime)
	{
		if(e >= x) return true;
		if(x % e == 0) return false;
	}
	return true;
}

int main(void) {
	bool flag;
	for(int i = 2;i <= 100000;i++) {
		flag = true;
		for(auto e:prime) {
			if(i % e == 0) {flag = false;
			break;
			}
		}
		if(flag) prime.insert(i);
	}
	int n,t,c=0;
	cin >> n;
	for(int i = 0; i < n;i++) {
		cin >> t;
		if(isPrime(t)) c++;
	}
	cout << c << endl;
}

