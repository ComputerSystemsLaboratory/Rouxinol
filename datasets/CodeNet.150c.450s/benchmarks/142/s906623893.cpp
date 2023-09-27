#include<iostream>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
using ll = long long;
using P = pair<int, int>;
#include<algorithm>
#include<math.h>
#include<map>
#include<queue>
#include<set>

int main() {
	int n, k;
	cin >> n >> k;
	vector<int>a(n);

	rep(i,n) {
		cin >> a[i];
	}
	
	rep(i, n - k) {
		int s = a[i];
		int buf;
		buf = a[k + i];
		if (buf > s) {
			cout << "Yes" << endl;;
		}
		else {
			cout << "No" << endl;;
		}
		//s = buf;
	}
	return 0;
}