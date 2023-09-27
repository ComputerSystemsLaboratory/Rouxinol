#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int a[4], b[4];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int hit = 0;
		int blow = 0;
		rep(i, 4)if (a[i] == b[i])hit++;
		rep(i, 4) if (find(a, a + 4, b[i]) != a + 4)blow++;
		cout << hit << ' ' << blow - hit << endl;
	}
	return 0;
}