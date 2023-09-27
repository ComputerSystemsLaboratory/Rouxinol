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
	int n;
	while (cin >> n) {
		if (n == 0)break;
		int a[1000] = {};
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int mi = (int)MOD;
		for (int i = 0; i < n-1; i++) {
			mi = min(mi, a[i + 1] - a[i]);
		}
		cout << mi << endl;
	}
	return 0;
}
