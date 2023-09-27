#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	vector<int>a(2);
	for (int b = 0; b < 2; b++) {
		for (int c = 0; c < 4; c++) {
			int d;
			cin >> d;
			a[b] += d;
		}
	}
	cout << max(a[0], a[1]) << endl;
}