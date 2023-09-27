//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0006
#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	string str; cin >> str;
	for (auto it = str.rbegin(); it != str.rend(); it++) {
		cout << *it;
	}
	cout << endl;
}