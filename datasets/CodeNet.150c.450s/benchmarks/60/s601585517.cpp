#include<iostream>
#include<vector>
using namespace std;
int main() {
	int point_number;
	cin >> point_number;
	vector<vector<int>>v(point_number);
	for (int i = 0;i < point_number;i++) {
		int point;
		cin >> point;
		v[i].push_back(point);
		int rinsetu;
		cin >> rinsetu;
		v[i].push_back(rinsetu);
		for (int j = 0;j < rinsetu;j++) {
			int tunagari;
			cin >> tunagari;
			v[i].push_back(tunagari);
	


		}

	
	
	
}
	vector<vector<int>>ans(point_number,vector<int>(point_number));
	for(int i = 0;i < point_number;i++){
		for (int j = 0;j < v[i][1];j++) {
			ans[v[i][0]-1][v[i][j + 2]-1] = 1;
		}


	}
	for (int i=0;i < point_number;i++) {
		for (int j=0;j < point_number;j++) {
			if (j == 0) {
				cout << ans[i][j];
			}
			else {
				cout << " " << ans[i][j];
			}
		}
		cout << endl;
	}
	
}