#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int prime[300000];
int main() {
	int n;
	while(cin >> n,n) {
		int ans = 0;
		vector<int> data;
		for(int i = 0; i < n; i++) {
			int t;
			cin >> t;
			data.push_back(t);
			ans += t;
		}
		sort(data.begin(), data.end());
		ans = ans - data[data.size()-1] - data[0];
		cout << ans / (n - 2) << endl;
	}
	return 0;
}