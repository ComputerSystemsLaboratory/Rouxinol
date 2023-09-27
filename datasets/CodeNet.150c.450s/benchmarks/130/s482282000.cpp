#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	int input;
	vector <vector<int>> A;
	vector<int> b;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		vector<int> tmpVect;
		for (int j = 0; j < m; j++) {
			cin >> input;
			tmpVect.push_back(input);
		}
		A.push_back(tmpVect);
	}
	for (int i = 0; i < m; i++) {
		cin >> input;
		b.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		int tmpInt = 0;
		for (int j = 0; j < m; j++) {
			tmpInt += A[i][j] * b[j];
		}
		printf("%d\n", tmpInt);
	}
	
	return 0;
}