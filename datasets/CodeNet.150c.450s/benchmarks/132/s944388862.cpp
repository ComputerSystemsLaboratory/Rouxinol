#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<functional>
#include<numeric>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<utility>
#include<sstream>
#include<complex>
#include<fstream>
#include<bitset>

using namespace std;

typedef long long ll;
typedef pair<ll,ll> P;

#define rep(i,N) for(int i=0;i<(N);i++)

int n, p;

int main() {
	while (cin >> n >> p&&n + p) {
		int cnt[100] = {};
		int now = 0;
		int k = p;
		while (1) {
			if (k > 0) {
				cnt[now]++;
				k--;
				if (k == 0 && cnt[now] == p) {
					cout << now << endl;
					break;
				}
			}
			else {
				k += cnt[now];
				cnt[now] = 0;
			}
			now = (now + 1) % n;
		}
	}
}