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

ll n,k,w[100000];

bool isEnough(ll p) {
	ll cur = 0;
	ll count = 1;
	for(ll i = 0;i < n;i++) {
		cur += w[i];
		if(cur > p) {
			count++;
			cur = w[i];
			if(cur > p) return false;
		}
	}
	return count <= k;
}

int main(void) {
	cin >> n >> k;
	input(n,w);
	ll m[2] = {0,100000000000};
	while(m[1] - m[0] > 1) {
		ll t = (m[0] + m[1]) / 2;
		if(isEnough(t)) {
			m[1] = t;
		}
		else {
			m[0] = t + 1;
		}
	}
	if(isEnough(m[0])) m[1] = m[0];
	cout << m[1] << endl;
}

