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
	int n, m, p;
	while(cin >> n >> m >> p, n||m||p) {
		int sum = 0, win = 0;
		rep(i, n) {
			int x;
			cin >> x;
			if(i+1 == m) {
				win = x;
			}
			sum += x;
		}
		if( win == 0 ) cout << 0 << endl;
		else {
			sum = 100 * sum - 100 * sum * p / 100;
			cout << sum / win << endl;
		}
	}
	return 0;
}