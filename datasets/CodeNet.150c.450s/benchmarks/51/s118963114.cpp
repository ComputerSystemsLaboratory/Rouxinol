#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

bool b[31];
int main() {
	rep(i, 28) {
		int a; cin >> a;
		b[a] = true;
	}
	for (int i = 1; i <= 30; i++) {
		if (!b[i])cout << i << endl;
	}
	return 0;
}