#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

void solve(){
	int n, ai, max = 0;
	cin >> n;
	vector<int> a, b(n);
	for (int i = 0; i < n; i++){
		cin >> ai;
		if (ai > max) max = ai;
		a.push_back(ai);
	}
	vector<int> c(max + 1, 0);
	for (int i = 0; i < n; i++) c[a[i]]++;
	for (int i = 1; i <= max; i++) c[i] += c[i - 1];
	for (int i = n - 1; i >= 0; i--){
		b[c[a[i]] - 1] = a[i];
		c[a[i]]--;
	}
	for (int i = 0; i < n; i++){
		if (i) cout << " ";
		cout << b[i];
	}
	cout << endl;
}

signed main(){
	solve();
}