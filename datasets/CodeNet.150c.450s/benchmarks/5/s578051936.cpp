#include <iostream>
using namespace std;

int main() {

	int n, a[100];

	cin >> n;

	for (int i = 0; i < n;i++) {

		cin >> a[i];

	}
	for (int j = 0; j < n;j++) {

		if(j)cout << " ";
		cout << a[n - j - 1];

	}
	cout << endl;
	//cin >> /*変数他*/;
	//cout << /*文字列*/ << endl;
	return 0;
}
