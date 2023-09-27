#include <cstdio>
#include <iostream>
#include <algorithm>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

typedef long long ll;
using namespace std;
int n;
ll a[10010]; 
int main() {
	cin >> n;
	rep(i,n) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll s = 0;
	rep(i,n) {
		s += a[i];
	}
	cout << a[0] << " " << a[n-1] << " " << s << endl;
	return 0;
}