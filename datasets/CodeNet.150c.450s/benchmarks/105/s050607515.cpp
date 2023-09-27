#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<cmath>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<numeric>
#include<functional>
#include<algorithm>
#include<bitset>
#include<tuple>
#include<unordered_set>
#include<unordered_map>
#include<random>
#include<array>
#include<cassert>
using namespace std;
#define INF ((1<<30)-1)
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(v) v.begin(),v.end()




int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	rep(_,t) {
		int n;
		cin >> n;
		vector<long long> a(n);
		rep(i, n)cin >> a[i];
		string s;
		cin >> s;
		vector<long long> bits;

		int ans = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '0') {
				bits.push_back(a[i]);
				for (int j = 60; j >= 0; j--) {
					int k = -1;
					rep(kk, bits.size()) {
						if ((bits[kk] & ~((1LL<<j)-1)) == (1LL<<j)) {
							k = kk;
							break;
						}
					}
					if (k == -1)continue;
					rep(kk, bits.size()) {
						if (k == kk)continue;
						if (bits[kk] >> j & 1) {
							bits[kk] ^= bits[k];
						}
					}
				}
				sort(all(bits));
				while (bits.front() == 0)bits.erase(bits.begin());
				reverse(all(bits));
			}
			else {
				long long x = a[i];
				for (int j = 60; j >= 0; j--) {
					if ((x >> j & 1) == 0)continue;
					for (auto y : bits) {
						if ((y & ~((1LL << j) - 1)) == (1LL << j)) {
							x ^= y;
							break;
						}
					}
				}
				if (x) {
					ans = 1;
					break;
				}
			}
		}

		cout << ans << endl;
	}


	return 0;
}
