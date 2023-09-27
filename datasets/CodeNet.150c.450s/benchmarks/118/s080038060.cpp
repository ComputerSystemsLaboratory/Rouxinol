#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define base 196471
int n;
int main() {

	cin >> n;
	int Y, M, D;
	vector<int> ans;
	while (n--) {
		int tmp = 0;
		cin >> Y >> M >> D;
		tmp += (Y % 3 && !(M % 2)) ? 20 - D : 21 - D;
		for (int i = M+1; i <= 10; ++i) {
			tmp += (Y % 3 && !(i % 2)) ? 19 : 20;
		}
		for (int i = Y + 1; i <= 999; ++i) {
			tmp += (i % 3) ? 195 : 200;
		}
		ans.push_back(tmp);
	}
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << endl;
	}
	return 0;
}
