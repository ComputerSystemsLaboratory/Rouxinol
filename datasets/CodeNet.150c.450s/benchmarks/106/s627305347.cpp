#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int cnt = 0;
	for (int i = 1; i*i <= c; i++) {
		if (c%i == 0) {
			if (a <= i&&i <= b)cnt++;
			if (i != c / i&&a <= c / i&&c / i <= b)cnt++;
		}
	}
	cout << cnt << endl;
}