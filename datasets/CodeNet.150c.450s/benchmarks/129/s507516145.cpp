#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main() {

	int r, c;
	vector<vector<int> > vt;

	vector<int> tmpv;

	int data;

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> data;
			tmpv.push_back(data);
		}
		vt.push_back(tmpv);
		tmpv.clear();
	}
	data = 0;

	vector<int> csum;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			data += vt[i][j];
		}
		csum.push_back(data);
		data = 0;
	}

	vector<int> rsum;

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			data += vt[j][i];
		}
		rsum.push_back(data);
		data = 0;
	}


	/*for (int i = 0; i < c; i++) {
		cout << rsum[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < r; i++) {
		cout << csum[i] << " ";
	}*/

	int sum = accumulate(csum.begin(), csum.end(), 0) ;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << vt[i][j] << " " ;

		}
		cout << csum[i] << endl;
	}
	for (int i = 0; i < c; i++) {
		cout << rsum[i] << " ";
	}
	
	cout << sum << endl;

	return 0;
}