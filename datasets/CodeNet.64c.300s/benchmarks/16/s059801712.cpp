#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int n, a[200010], b, c, rmin, ret; 
	cin >> n;
	cin >> b >> c;
	rmin = min(b, c) , ret = c - b;
	rep(i,n-2) {
		cin >> a[i];
		if(ret < a[i] - rmin) ret = a[i] - rmin;
		if(a[i] < rmin) rmin = a[i];
	}
	cout << ret << endl;
	return 0;
}