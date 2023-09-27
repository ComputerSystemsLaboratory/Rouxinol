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
	int h, w;
	while (cin >> h >> w) {
		if (h == 0)break;
		int r = h * h + w * w;
		bool f = true;
		for (int i = h + 1; i <= w; i++) {
			for (int j = i + 1; j <= w; j++) {
				if (i*i + j * j == r) {
					cout << i << " " << j << endl;
					f = false; break;
				}
			}
			if (!f)break;
		}
		r++;
		while (f) {
			for (int i = 1; i <= 1000; i++) {
				for (int j = i + 1; j <= 1000; j++) {
					if (i*i + j * j == r) {
						cout << i << " " << j << endl;
						f = false; break;
					}
				}
				if (!f)break;
			}
			r++;
		}
	}
	return 0;
}

