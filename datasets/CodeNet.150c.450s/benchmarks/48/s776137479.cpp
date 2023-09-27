#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int e;
int main() {
	
	vector<int> ans;
	while (cin >> e, e) {
		int m=1000000;
		for (int i = 0; i <= e; ++i) {
			if (i*i*i > e) break;
			for (int j = 0; j <= e; ++j) {
				if (i*i*i + j * j > e) break;
				if (e - i * i*i - j * j >= 0) m = min(m, i + j + e - i * i*i - j * j);
			}
		}
		ans.push_back(m);
	}
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << endl;
	}
	return 0;
}
	
