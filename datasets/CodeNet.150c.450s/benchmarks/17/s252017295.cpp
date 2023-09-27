#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	sort(a, a+5);
	reverse(a, a+5);
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
	return 0;
}