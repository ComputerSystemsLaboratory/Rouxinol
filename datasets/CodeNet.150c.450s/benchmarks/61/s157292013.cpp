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
	int n, a, b, c, x,y;
	while (cin >> n >> a >> b >> c >> x) {
		if (n == 0)break;
		int check = 0;
		for (int i = 0; i < n; i++) {
			if (i > 0) {
				check++; x = (a*x + b) % c;
			}
			cin >> y;
			while (x != y&&check<=10000) {
				check++;
				x = (a*x + b) % c;
			}
		}
		if (check > 10000)cout << -1 << endl;
		else cout << check << endl;
	}
	return 0;
}
