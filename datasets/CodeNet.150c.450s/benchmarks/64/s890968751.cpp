#include<iostream>
#include<string>
using namespace std;
int a[20], n;
bool solve(int, int);
string putout(bool);
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	int q, x;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> x;
		cout << putout(solve(0,x)) << endl;
	}
	return 0;
}
bool solve(int i, int m) {
	if (m == 0)return true;
	if (i >= n)return false;
	return solve(i + 1, m) || solve(i + 1, m - a[i]);
}
string putout(bool a) {
	if (a)return "yes";
	else return "no";
}