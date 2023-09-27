#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main() {
	for(int n, m; cin >> n >> m && n * m!= 0; ) {
		vector<int> taro(n), hanako(m);
		
		for(int i = 0; i < n; i++) {
			cin >> taro[i];
		}
		
		for(int i = 0; i < m; i++) {
			cin >> hanako[i];
		}
		
		int ts = accumulate(taro.begin(), taro.end(), 0);
		int hs = accumulate(hanako.begin(), hanako.end(), 0);
		int t = 101, h = 101;
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(ts - taro[i] + hanako[j] == hs - hanako[j] + taro[i] &&
           taro[i] + hanako[j] < t + h) {
					t = taro[i];
					h = hanako[j];
				}
			}
		}
		
		if(t == 101 && h == 101) {
			cout << -1 << endl;
		} else {
			cout << t << " " << h << endl;
		}
	}
}