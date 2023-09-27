#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[100];
int main() {
	int n; cin >> n;
	rep(i, n)cin >> a[i];
	reverse(a, a + n);
	rep(i, n) {
		if (i)cout << ' ';
		cout << a[i];
	}
	cout << endl;
}