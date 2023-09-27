#include<bits/stdc++.h>
#define rep(i,n)for(ll i=0;i<n;i++)
using namespace std;
typedef long long ll;

int a[101];

int main() {
	int n;
	while (cin >> n)a[n]++;
	int Max = *max_element(a, a + 101);
	rep(i, 101) {
		if (a[i] == Max)cout << i << endl;
	}
	return 0;
}