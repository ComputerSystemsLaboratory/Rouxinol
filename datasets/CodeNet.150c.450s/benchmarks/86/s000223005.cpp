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
	int n, m, p,x,sum,memo=0;
	while (cin >> n >> m >> p) {
		if (n == 0)break;
		sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> x; sum += x;
			if (m == i + 1)memo = x;
		}
		if (memo == 0)cout << 0 << endl;
		else cout << (100 - p)*sum / memo << endl;
	}
	return 0;
}
