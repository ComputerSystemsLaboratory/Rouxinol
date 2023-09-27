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
int main() {
	int n, q;
	while (cin >> n >> q) {
		if (n == 0 && q == 0)break;
		int wan=q;
		int a[50] = {};
		int j=0;
		while (true) {
			if (wan == 0) {
				wan = a[j]; a[j] = 0;
			}
			else {
				wan--; a[j]++;
			}
			if (a[j] == q) {
				cout << j << endl; break;
			}
			j=(j+1)%n;
		}
	}
	return 0;
}
