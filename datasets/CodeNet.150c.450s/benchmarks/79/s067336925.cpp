#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define mod 1000000007
int n, p, c, tr;
int main() {
	vector<int> ans;
	int yama[51], tmp[51];
	while (cin >> n >> tr, (n || tr)) {
		for (int i = 0; i <n; ++i) {
			yama[i] = i + 1;
		}
		for (int i = 0; i < tr; ++i) {
			cin >> p >> c;
			for (int j = 0; j < c; ++j) {
				tmp[c-1-j] = yama[n - p - j];
			}
			for (int j = n - p + 1; j < n; j++) {
				yama[j - c] = yama[j];
			}
			for (int j = 0; j < c; j++) {
				yama[n - c + j] = tmp[j];
			}
		}
		ans.push_back(yama[n - 1]);
	}
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << endl;
	}


	return 0;
}
