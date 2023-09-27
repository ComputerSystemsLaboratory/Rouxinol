#include <iostream>

using namespace std;

int a, b;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> a >> b;
	if (a > b) {
		cout << "a" << " > " << "b" << "\n";
	}
	else if (a < b) {
		cout << "a" << " < " << "b" << "\n";
	}
	else {
		cout << "a" << " == " << "b" << "\n";
	}
	cin >> a;
	return 0;
}