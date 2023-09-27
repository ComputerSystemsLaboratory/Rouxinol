#include<iostream>
using namespace std;
int main() {
	int n,oki[1111],ok,ans[11111],an;
	ok = 0;
	an = 0;
	while(cin >> n) {
		if (n == 0) {
			an = an + 1;
			ans[an] = oki[ok];
			ok = ok - 1;
		}
		else {
			ok = ok + 1;
			oki[ok] = n;
		}
	}
	for (int i = 1; i <= an; i++) {
		cout << ans[i] << endl;
	}
}
