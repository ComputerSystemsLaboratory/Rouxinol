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
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double root2 = sqrt(2);
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	int n; int a, d;
	while (cin >> n) {
		if (n == 0)break;
		int minx = 0; int miny = 0; int maxx = 0; int maxy = 0;
		P p[200]; p[0] = make_pair(0, 0);
		for (int i = 1; i < n; i++) {
			cin >> a >> d;
			if (d == 0) {
				p[i].first = p[a].first - 1;
				p[i].second = p[a].second;
				minx = min(minx, p[i].first);
			}
			else if (d == 1) {
				p[i].first = p[a].first;
				p[i].second = p[a].second - 1;
				miny = min(miny, p[i].second);
			}
			else if (d == 2) {
				p[i].first = p[a].first + 1;
				p[i].second = p[a].second;
				maxx = max(maxx, p[i].first);
			}
			else if (d == 3) {
				p[i].first = p[a].first;
				p[i].second = p[a].second + 1;
				maxy = max(maxy, p[i].second);
			}
		}
		cout << maxx - minx+1 << " " << maxy - miny+1 << endl;
	}
	return 0;
}

