#include <iostream>
#include <cstring>
#include <utility>

using namespace std;

const int N = 100;

int main() {
	int n, m, sa, sb, d, ans;
	int a[N], b[N];
	pair<int, int> p;
	while(cin >> n >> m, n){
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		sa = sb = 0;
		ans = 2 * N;
		p = make_pair(0, 0);
		for(int i = 0;i < n;++i){
			cin >> a[i];
			sa += a[i];
		}
		for(int i = 0;i < m;++i){
			cin >> b[i];
			sb += b[i];
		}
		d = sa - sb;
		if(d & 1) {
			cout << -1 << endl;
		}
		else {
			d = d / 2;
			for(int i = 0;i < n;++i){
				for(int j = 0;j < m;++j){
					if(a[i] - b[j] == d && a[i] + b[j] < ans) {
						ans = a[i] + b[j];
						p = make_pair(a[i], b[j]);
					}
				}
			}
			if(ans != 2 * N) {
				cout << p.first << " " << p.second << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
	}
	return 0;
}

