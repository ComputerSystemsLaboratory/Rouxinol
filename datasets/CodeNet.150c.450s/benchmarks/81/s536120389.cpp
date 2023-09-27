#include<iostream>
#include<algorithm>

const int TOWN = 10;
const int INF = 1000000000;

using namespace std;

int main() {
	int n;
	int a, b;

	while (cin >> n , n) {

		int d[TOWN][TOWN];
		for (int i = 0; i < TOWN; i++) {
			for (int j = 0; j < TOWN; j++) {
				if (i == j)			d[i][j] = 0;
				else				d[i][j] = INF;
			}
		}

		int num_of_town = 0;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			cin >> d[a][b];
			d[b][a] = d[a][b];
			num_of_town = max(num_of_town, max(a, b));
		}
		num_of_town++;
		//	cout << "num_of_town = " << num_of_town << "\n";



		for (int k = 0; k < num_of_town; k++) {
			for (int i = 0; i < num_of_town; i++) {
				for (int j = 0; j < num_of_town; j++) {
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}

		//cout << "\n";
		//for (int i = 0; i < num_of_town; i++) {
		//	for (int j = 0; j < num_of_town; j++) {
		//		cout << i << " " << j << " " <<  d[i][j] << "\n";
		//	}
		//}
		//cout << "\n";

		int ans_d = INF;
		int ans_t;
		int tmp = 0;
		for (int i = 0; i < num_of_town; i++) {
			for (int j = 0; j < num_of_town; j++) {
				tmp += d[i][j];
			}
			if (ans_d > tmp) {
				ans_d = tmp;
				ans_t = i;
			}
			tmp = 0;
		}
		cout << ans_t << " " << ans_d << "\n";
	}
	
 	return 0;
}
