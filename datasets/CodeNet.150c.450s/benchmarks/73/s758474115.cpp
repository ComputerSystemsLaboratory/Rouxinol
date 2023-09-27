#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <limits.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
typedef pair<int,int> pii;

int n, q;
vector<ll> v;

ll query(int a, int b, int k, int l, int r) {
	if(r <= a || b <= l) return 0;
	if(a <= l && r <= b) return v[k];
	ll vl = query(a, b, k*2+1, l, (l+r)/2);
	ll vr = query(a, b, k*2+2, (l+r)/2, r);
	return vl + vr;
}

int main() {
	cin >> n >> q;
	int _n = n;
	n = 1;
	while(n < _n) n *= 2;
	v.resize(2*n-1, 0);
	rep(i, q) {
		int c, x, y;
		cin >> c >> x >> y;
		if(c == 0) {
			x += n-1 - 1;
			v[x] += y;
			while(x > 0) {
				x = (x-1) / 2;
				v[x] += y;
			}
		}
		else {
			cout << query(x-1, y+1-1, 0, 0, n) << endl;
		}
	}
	return 0;
}