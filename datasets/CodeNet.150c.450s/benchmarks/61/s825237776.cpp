#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int main() {
	int n, a, b, c, x;
	while(cin >> n >> a >> b >> c >> x, n||a||b||c||x) {
		int y[n];
		rep(i, n) cin >> y[i];
		int res = 0, p=0;
		while(p<n) {
			if(x == y[p]) {
				p++;
				if(p==n) break;
			}
			res++;
			if( res > 10000 ) {
				res = -1;
				break;
			}
			x = (a * x + b) % c;
		}
		cout << res << endl;
	}
	return 0;
}