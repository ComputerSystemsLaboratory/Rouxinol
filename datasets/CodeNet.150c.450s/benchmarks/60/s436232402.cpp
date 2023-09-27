#include<iostream>
#include<vector>
using namespace std;
int main() {
	int point_number;
	cin >> point_number;
	vector<vector<int>>v(point_number);
	for (int i = 0;i < point_number;i++) {
		int point_name;
		cin >> point_name;
		v[i].push_back(point_name);
		int adj_point_number;
		cin >> adj_point_number;
		v[i].push_back(adj_point_number);
		for (int j = 0;j < adj_point_number;j++) {
			int adj_point_name;
			cin >> adj_point_name;
			v[i].push_back(adj_point_name);

		}

	}
	vector<vector<int>>ans(point_number, vector<int>(point_number));
	for (int i = 0;i < point_number;i++) {
		for (int j = 0;j < v[i][1];j++) {
			ans[v[i][0] - 1][v[i][j + 2] - 1] = 1;

		}


	}
	for (int i = 0;i < point_number;i++) {
		for (int j = 0;j < point_number;j++) {
			if (j == 0) {
				cout << ans[i][j];
			}
			else {
				cout << " " << ans[i][j] ;
			}
			
		}
		cout << endl;
	}
}