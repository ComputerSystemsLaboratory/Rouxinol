#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
	int a;
	vector<int> A;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		A.push_back(a);
	}
	sort(A.begin(), A.end(), greater<int>());
	cout << A[0] << endl;
	cout << A[1] << endl;
	cout << A[2] << endl;
	return 0;
}