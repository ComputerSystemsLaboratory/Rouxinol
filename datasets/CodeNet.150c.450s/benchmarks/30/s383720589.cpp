#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < int(n); i++)
typedef long long ll;
using namespace std;

int selection(vector<int>&a) {
	int mini;
	int cnt = 0;
	for (int i = 0; i<int(a.size()); i++) {
		mini = i;
		for (int j = i; j<int(a.size()); j++)
			if (a[j] < a[mini])
				mini = j;
		if (i != mini) {
			swap(a[i], a[mini]);
			cnt++;
		}	
	}
	return cnt;
}
int main() {
	int n;
	cin >> n;
	vector<int>a(n);
	rep(i, n)cin >> a[i];
	int cnt = selection(a);
	rep(i, n)cout << a[i] << (i == n - 1 ? '\n' : ' ');
	cout << cnt << endl;;
	return 0;
}