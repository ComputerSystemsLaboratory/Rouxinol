#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int calc(int n) {
	n *= 1.05;
	if (n % 1000)n = (n / 1000 + 1) * 1000;
	return n;
}
int main() {
	int n; cin >> n;
	int a = 100000;
	rep(i, n) {
		a = calc(a);
	}
	cout << a << endl;
	return 0;
}