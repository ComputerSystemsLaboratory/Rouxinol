#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<int> a(3);
	cin >> a[0] >> a[1] >> a[2];
	sort(a.begin(), a.begin() + 3);
	cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
	return 0;
}