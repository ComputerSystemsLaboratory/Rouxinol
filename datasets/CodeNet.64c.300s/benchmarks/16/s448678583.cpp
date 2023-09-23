#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main(int argc,char** argv) {
	ll n,t,m = 10000000000,r = -10000000000;
	cin >> n;
	for(ll i = 0;i < n;i++) {
		cin >> t;
		r = max(r,t - m);
		m = min(m,t);
	}
	cout << r << endl;
}

