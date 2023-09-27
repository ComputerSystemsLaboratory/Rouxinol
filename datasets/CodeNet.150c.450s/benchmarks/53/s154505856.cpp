#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin >> n;
	cout << n << ":";
	vector<int> ret;
	for(int i = 2; i * i <= n; i++) {
		while(n % i == 0) {
			n /= i;
			ret.push_back(i);
		}
	}
	if(n >= 2) ret.push_back(n);
	for(int i : ret) cout << ' ' << i;
	cout << endl;
	return 0;
}