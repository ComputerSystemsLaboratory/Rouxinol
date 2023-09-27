#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	vector<int> vt;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int data;

		cin >> data;
		vt.push_back(data);
	}

	for (int j = n-1; j > 0; j--) {
		cout << vt[j] << " ";
	}
	cout << vt[0] << endl;
	
	return 0;
}