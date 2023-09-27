#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define INF 9999999

int main() {

	int n, an;
	vector<int> vec;
	int ans = INF;

	while (1) {

		cin >> n;
		if (n == 0) break;
		//??\???
		for (int i = 0; i < n; i++) {
			cin >> an;
			vec.push_back(an);
		}
		//?????????
		sort(vec.begin(), vec.end());
		//??????????°?????¨????
		for (int i = 0; i < n - 1; i++) {
			if (vec[i + 1] - vec[i] < ans) {
				ans = vec[i + 1] - vec[i];
			}
		}
		//??????
		cout << ans << endl;
		//?????????
		vec.clear();
		ans = INF;
	}
	return 0;
}