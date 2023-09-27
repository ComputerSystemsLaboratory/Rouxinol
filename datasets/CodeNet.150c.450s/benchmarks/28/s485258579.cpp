#include <iostream>
#include <cstdio>
using namespace std;
#define rep(x,to) for(int x=0; x<(to); (x)++)

int main() {
	int n, m;
	cin >> n >> m;
	int w[100000+10] = {};
	int hi = 0;
	rep(i,n) {
		cin >> w[i];
		hi += w[i];
	}
	int lo = 0;
	while(hi - lo > 1) {
		int mid = (lo + hi) / 2;
		int sum = 0;
		int cnt = 1;
		bool f = 0;
		rep(i,n) {
			if(mid < sum + w[i]) {
				sum = 0;
				cnt++;
			}
			sum += w[i];
			if(mid < w[i]) {
				f = 1;
				break;
			}
		}
		if(f) lo = mid;
		if(!f && cnt <= m) hi = mid;
		else lo = mid;
	}
	cout << lo + 1 << endl;
	return 0;
}