#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool smaller(const int left, const int right) {
	return left>right;
}

int main()
{
	vector<int> num;
	for (int i=0; i<5; i++) {
		int tmp;
		cin >> tmp;
		num.push_back(tmp);
	}
	sort(num.begin(),num.end(),smaller);
	for (int i=0; i<4; i++) {
		cout << num[i] << ' ';
	}
	cout << num[4] << endl;
	return 0;
}