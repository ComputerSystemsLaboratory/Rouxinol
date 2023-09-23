#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, m, p;

	while(cin >> n >> m >> p && (n || m || p)){
		int sum = 0;
		int maisu = 0;
		int winner = -1;
		for (int i = 0;i < n;i++) {
			cin >> maisu;
			sum += maisu;
			if (i + 1 == m)winner = maisu;
		}

		if (winner!= 0) {
			cout << (sum*(100 - p)) / winner << endl;
		}
		else {
			cout << 0 << endl;
		}
		winner = -1;
		maisu = 0;
		sum = 0;


	} 

	return 0;
}