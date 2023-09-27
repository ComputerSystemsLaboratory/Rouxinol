#include <bits/stdc++.h>
typedef long long ll;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define dbg2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl
#define dbg3(x,y,z) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<endl
#define dbg4(x,y,z,q) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<", "<<#z<<" = "<<z<<", "<<#q<<" = "<<q<<endl
#define dbg_array(x,sz) for (int i = 0; i < sz; ++i) cout << x[i] << " \n"[i==sz-1]
using namespace std;

const ll N = 1e5 + 9, M = 400 - 9, Max_ans = 1LL * (1e16);
int ans[N];

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
#ifdef ECLIPSE
	freopen("input.in", "rt", stdin);
	//freopen("output.out", "wt", stdout);
#endif
	int n;
	cin >> n;
	for (int i = 1; i <= 100; ++i)
		for (int j = 1; j <= 100; ++j)
			for (int k = 1; k < 100; ++k) {
				int num = i * i + j * j + k * k + i * j + j * k + i * k;
				++ans[num];
			}
	for (int i = 1; i <= n; ++i)
		printf("%d\n", ans[i]);
	return 0;
}

