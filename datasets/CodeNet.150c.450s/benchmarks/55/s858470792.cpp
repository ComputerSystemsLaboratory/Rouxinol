#include <iostream>

using namespace std;

int main()
{
	string x;

	while (cin >> x, x != "0") {
		int y = 0;
		while (!x.empty()) {
			y += x[0] - '0';
			x = x.substr(1);
		}
		cout << y << endl;
	}
}