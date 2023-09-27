#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n[5];
	for (int i = 0; i < 5; i++)
		cin >> n[i];
	sort(n, n + 5, greater<int>());
	cout << n[0];
	for (int i = 1; i < 5; i++)
		cout << " " << n[i];
	cout << endl;
	return 0;
}