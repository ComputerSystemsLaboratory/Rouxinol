#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	vector<int> num{a, b, c, d, e};
	sort(num.begin(), num.end(),greater<int>());
	for (int i = 0; i < 5; i++) {
		if (i != 4)cout << num[i] << " ";
		else cout << num[i];
	}
	cout << endl;
	return 0;
}