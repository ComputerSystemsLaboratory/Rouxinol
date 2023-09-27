#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
typedef unsigned int ui;
int main(){
	int m, ni, na,p;
	while (cin >> m >> ni >> na) {
		if (m == 0)break;
		int ma = 0; int check; int memo = 0;
		for (int i = 1; i <= m; i++) {
			if (i == 1) {
				cin >> p; memo = p; continue;
			}
			cin >> p;
			if (ni < i && i <= na+1) {
				if (ma <= memo - p) {
					ma = memo - p; check = i - 1;
				}
			}
			memo = p;
		}
		cout << check << endl;
	}
	return 0;
}
