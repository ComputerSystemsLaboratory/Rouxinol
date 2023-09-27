#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void solve(){
	int n;
	bool flag = false;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	int x = a[n - 1];
	int i = -1;
	for (int j = 0; j < n - 1; j++){
		if (a[j] <= x) swap(a[++i], a[j]);
	}
	swap(a[++i], a[n - 1]);
	for (int k = 0; k < n; k++){
		if (flag) cout << " ";
		else flag = true;
		if (k == i) cout << "[" << a[k] << "]";
		else  cout << a[k];
	}
	cout << endl;
}

signed main(){
	solve();
}