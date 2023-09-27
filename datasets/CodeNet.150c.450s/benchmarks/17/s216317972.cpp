#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

vector<int> a(5);

int main() {
	rep(i,5) cin >> a[i];
	sort(a.rbegin(), a.rend());
	rep(i,5) cout << a[i] << (i==4 ? '\n' : ' ');
}
