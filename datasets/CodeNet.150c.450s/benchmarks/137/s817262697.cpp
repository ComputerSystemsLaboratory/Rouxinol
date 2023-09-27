#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, bool> T;
	int commandNum;

	cin >> commandNum;
	for (int i = 0; i < commandNum; i++) {
		string command, str;
		cin >> command >> str;

		if (command[0] == 'i') T[str] = true; //insert??????
		else {								  //find??????
			if (T[str]) cout << "yes" << endl;
			else        cout << "no"  << endl;
		}
	}

	return 0;
}