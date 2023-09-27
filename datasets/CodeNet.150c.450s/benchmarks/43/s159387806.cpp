#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	int n; 
	while (cin >> n, n) {
		int c1 = 0, c2 = 0;
		rep(i, n) {
			int a, b; cin >> a >> b;
			if (a > b)c1 += a + b;
			else if (a < b)c2 += a + b;
			else { c1 += a; c2 += b; }
		}
		cout << c1 << ' ' << c2 << endl;
	}
	return 0;
}