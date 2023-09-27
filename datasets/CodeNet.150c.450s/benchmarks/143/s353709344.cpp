#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<map>
#define ran(x) (x).begin(),(x).end()
using namespace std;
int main() {
	int64_t n,sum=0,a=0;
	cin >> n;
	map<int64_t, int64_t> g;
	vector<int64_t> b;
	for(int i = 0; i < n; ++i) {
		cin >> a;
      	sum+=a;
		++g[a];
	}
	int q; cin >> q;
	for(int i = 0; i < q; ++i) {
		int x, y; cin >> x >> y;
		sum -= x * g[x];
		sum += y * g[x];
		g[y] += g[x];
		g[x] = 0;
		cout << sum << endl;
	}
}