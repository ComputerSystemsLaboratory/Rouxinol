#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, left, right;
	int m, h;

	while (1) {
		cin >> str;
		if (str == "-") break;

		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			left = str.substr(0, h);
			right = str.substr(h);
			str = right + left;
		}
		cout << str << endl;
	}

	return 0;
}