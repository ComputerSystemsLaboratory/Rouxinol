#include<iostream>
#include<cstdio>
#include<math.h>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<set>
#include<map>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;

int x, y, s;

int rate(int a, int r) {
	int k = floor(a*(100 + r) / 100);
	return k;
}

int main()
{
	while (cin >> x >> y >> s) {
		if (x == 0 && y == 0 && s == 0)return 0;

		vector<int> d;
		for (int i = s - 1; i >= 1; i--) {
			d.push_back(s-floor(i*(100 + x) / 100));
		}
		//cout << "a" << endl;
		int mx = 0;
		int mxi=0, mxj=0;
		for (int i = 0; i < d.size(); i++) {
			int j = lower_bound(d.begin(), d.end()-1, s - d[i]) - d.begin();
			//cout << j << endl;
			if (j != (int)d.size()) {
				if (d[i] + d[j] == s) {
					mx = max(mx,rate(s - 1 - i, y) + rate(s - 1 - j, y));

				}
			}
		}
		cout << mx << endl;

	}


	return 0;
}

