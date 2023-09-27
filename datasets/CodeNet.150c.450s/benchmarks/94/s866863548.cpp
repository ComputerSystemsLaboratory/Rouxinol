#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < int(n); i++)
typedef long long ll;
using namespace std;

int bubble(vector<int>&a) {
	int cnt = 0;
	for (int i = 0; i<int(a.size()); i++) {
		for (int j = int(a.size()) - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
				cnt++;
			}
		}
	}
	return cnt;
}
int main() {
	int n;
	cin >> n;
	vector<int>a(n);
	rep(i, n)cin >> a[i];
	int cnt = bubble(a);
	rep(i, n)cout << a[i] << (i == n - 1 ? '\n' : ' ');
	cout << cnt << endl;
	return 0;
}