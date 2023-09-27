#include<iostream>
#include<vector>
#include<string>
using namespace std;

signed main() {
	int a, b,c;
	cin >> a >> b>>c;
	(a < b&&b < c) ? (cout << "Yes" << endl) : (cout << "No" << endl);
}