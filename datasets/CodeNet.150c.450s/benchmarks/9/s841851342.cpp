#include <iostream>
#include <string>

using namespace std;

int main(void) {

	int number;
	string str;


	while (1) {

		cin >> str;
		if (str == "-") break;

		cin >> number;
		for (int i = 0; i < number; i++) {
			int move;
			string strC;
			cin >> move;

			strC = str.substr(move, str.length());
			str.erase(move, str.length());
			str.insert(0, strC);
		}

		cout << str << endl;
	}
	return 0;
}