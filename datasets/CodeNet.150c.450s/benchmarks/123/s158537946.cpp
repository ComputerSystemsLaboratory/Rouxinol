#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int n, a, ret = 0;
	cin >> n;
	rep(i,n) {
		cin >> a;
		int f = 1;
		rep2(j,2,(int) (sqrt(a) + 1)) {
			if(a % j == 0) {
				f = 0;
				break;
			}
		}
		if(f) ret++;
	}
	cout << ret << endl;
	return 0;
}