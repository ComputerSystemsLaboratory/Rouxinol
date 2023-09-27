#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <algorithm>
#define rep(i, n) for(i = 0; i < (n); i++)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define MOD 1000000007
#define PI 3.14159265358979323846
#define INF 1 << 30

using namespace std;
typedef long long ll;
typedef pair<int, int> pp;

int main(void) {
	int num, i, x, y, z, n;
	cin >> num;
	vector<int> ans(num + 1, 0);
	for (x = 1; x < 105; x++) {
		for (y = 1; y < 105; y++) {
			for (z = 1; z < 105; z++) {
				n = (x + y + z) * (x + y + z) - x * (y + z) - y * z;
				if (n <= num)
					ans[n]++;
			}
		}
	}
	for(i = 1; i <= num; i++)
		cout << ans[i] << "\n";
	return 0;
}