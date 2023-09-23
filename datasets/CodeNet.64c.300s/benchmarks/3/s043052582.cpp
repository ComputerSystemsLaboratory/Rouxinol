	#include <cstdio>
	#include <iostream>
	using namespace std;
	#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
	#define rep(x,to) rep2(x,0,to)
	int n, a[105], b[105];

	int main() {
		cin >> n;
		rep(i,n) {
			cin >> a[i];
		}
		rep(i,n) {
			b[n - 1 - i] = a[i];
		}
		rep(i,n-1) {
			cout << b[i] << " ";
		}
		cout << b[n-1] << endl;
		return 0;
	}