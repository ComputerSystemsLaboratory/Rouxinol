#include <iostream>

using namespace std;

int main()
{
	string c;
	int m;

	while (cin >> c, c != "-") {
		for (cin >> m; m > 0; m--) {
			int h;
			cin >> h;
			c = c.substr(h) + c.substr(0, h);
		}
		
		cout << c << endl;
	}
}