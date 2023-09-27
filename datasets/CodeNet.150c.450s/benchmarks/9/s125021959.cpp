#include <iostream>
#include <string>
#define SIZE 100

using namespace std;

string shuffle(string, int);

int main(void){

	while (1) {
		string str;
		int m;
		int h[SIZE];

		cin >> str;
		if (str == "-") break;

		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h[i];
		}

		for (int i = 0; i < m; i++) {
			str = shuffle(str, h[i]);
		}

		cout << str << "\n";
	}
	
	return 0;
}

string shuffle(string str, int h) {
	string buf;
	buf = str.substr(0, h);
	str.erase(str.begin(), str.begin() + h);
	str += buf;
	return str;
}