#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<string>
#include<cctype>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int main() {
	string a, b = "";
	cin >> a;

	for (int i = a.size() - 1; i >= 0; i--)b += a[i];
	cout << b << endl;

	return 0;
}