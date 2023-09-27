#include<iostream>
#include<vector>
#include<string>
using namespace std;

signed main() {
	string a;
	cin >> a;
	for (int b = a.length() - 1; b != -1; b--)cout << a[b];
	cout << endl;
}