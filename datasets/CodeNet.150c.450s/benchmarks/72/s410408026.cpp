#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
#include <string>

using namespace std;

int main() {

	const char *origin;
	//chartransformed[1200];
	string str;
	//cin >> origin;
	getline(cin, str);
	origin = str.c_str();

	//cout << strlen(origin) << endl;
	
	//???????????????????????????
	for (int i = 0; i < strlen(origin); i++) {

		//cout << "i=" << i << endl;

		//?¨?????????´???
		if (isupper(origin[i]) == 0 && islower(origin[i]) == 0) {
			//cout << "kigou" << endl;
			//????????????
			//transformed[i] = origin[i];
			cout << (char)origin[i];
		}
		//??§???????????´???
		else if (isupper(origin[i]) != 0) {
			//cout << "upper" << endl;
			//transformed[i] = tolower(origin[i]);
			cout << (char)tolower(origin[i]);
		}
		//?°????????????´???
		else if (islower(origin[i]) != 0) {
			//cout << "lower" << endl;
			//transformed[i] = toupper(origin[i]);
			cout << (char)toupper(origin[i]);
		}

	}

	cout << endl;

	return 0;
}