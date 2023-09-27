#include <iostream>
#include <vector>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n; vector<int> a(n);
	for (int i = 0; i < n;i++) cin >> a[i];
	for (auto i = a.rbegin();;) {
		cout << *i;	i++;
		if (i == a.rend()) { cout << endl; return 0; }
		cout << " ";
	}
}