#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	while (x != 0 || y != 0) {
		cout << min(x, y) << " " << max(x, y) << endl;
		cin >> x >> y;
	}
	return 0;
}