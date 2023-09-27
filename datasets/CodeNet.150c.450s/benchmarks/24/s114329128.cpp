#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
typedef long long L;
typedef pair<L,L> P;

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)break;

		vector<P>v;
		long long sum = 0;
		for (int i = 0;i < n;i++) {
			long long a, b;
			cin >> a >> b;
			v.push_back(make_pair(a,b));
			sum += a*b;
		}

		L p[11] = {};
		for (int i = 0;i < n;i++) {
			p[v[i].second ] += v[i].first;
		}
		
		for (int i = 10;i > -1;i--) {
			if (0 < m) {
				if (m >= p[i])sum -= p[i] * i;
				else sum -= m*i;

				m -= p[i];
			}
		}
		
		if (sum < 0)sum = 0;
		cout <<sum << endl;
	}
	return 0;
}