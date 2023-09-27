#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
#define f first
#define s second
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
const int maxn = 10010;

int n;
int ans[maxn];

int32_t main() {
	cin >> n;
	for (int x = 1; x <= 100; x++) {
		for (int y = 1; y <= 100; y++) {
			for (int z = 1; z <= 100; z++) {
				int sum = (x*x + y*y + z*z + x*y + y*z + z*x);
				if (sum < maxn) ans[sum]++;
			}
		}
	}
	
	for (int i =1; i<= n;i++) {
		cout << ans[i] << "\n";
	}

	
}


