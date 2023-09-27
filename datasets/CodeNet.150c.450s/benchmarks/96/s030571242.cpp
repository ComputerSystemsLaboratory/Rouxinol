#include <iostream>
#include <string>
using namespace std;

void strplus(string& s, int nn, int c)
{
	switch (nn) {
	case 0:
		break;
	case 1:
		switch (c % 5) {
		case 0:
			s += ".";
			break;
		case 1:
			s += ",";
			break;
		case 2:
			s += "!";
			break;
		case 3:
			s += "?";
			break;
		case 4:
			s += " ";
			break;
		}
		break;
	case 2:
		switch (c % 3) {
		case 0:
			s += "a";
			break;
		case 1:
			s += "b";
			break;
		case 2:
			s += "c";
			break;
		}
		break;
	case 3:
		switch (c % 3) {
		case 0:
			s += "d";
			break;
		case 1:
			s += "e";
			break;
		case 2:
			s += "f";
			break;
		}
		break;
	case 4:
		switch (c % 3) {
		case 0:
			s += "g";
			break;
		case 1:
			s += "h";
			break;
		case 2:
			s += "i";
			break;
		}
		break;
	case 5:
		switch (c % 3) {
		case 0:
			s += "j";
			break;
		case 1:
			s += "k";
			break;
		case 2:
			s += "l";
			break;
		}
		break;
	case 6:
		switch (c % 3) {
		case 0:
			s += "m";
			break;
		case 1:
			s += "n";
			break;
		case 2:
			s += "o";
			break;
		}
		break;
	case 7:
		switch (c % 4) {
		case 0:
			s += "p";
			break;
		case 1:
			s += "q";
			break;
		case 2:
			s += "r";
			break;
		case 3:
			s += "s";
			break;
		}
		break;
	case 8:
		switch (c % 3) {
		case 0:
			s += "t";
			break;
		case 1:
			s += "u";
			break;
		case 2:
			s += "v";
			break;
		}
		break;
	case 9:
		switch (c % 4) {
		case 0:
			s += "w";
			break;
		case 1:
			s += "x";
			break;
		case 2:
			s += "y";
			break;
		case 3:
			s += "z";
			break;
		}
		break;
	}
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		string temp;

		cin >> temp;

		int nownum = 0;
		int count = 0;

		for (unsigned int j = 0; j < temp.size(); j++) {
			if (stoi(temp.substr(j, 1)) == 0) {
				strplus(str, nownum, count);
				nownum = 0;
			}
			else {
				if (nownum == stoi(temp.substr(j, 1))) {
					count++;
				}
				else {
					nownum = stoi(temp.substr(j, 1));
					count = 0;
				}
			}
		}

		cout << str << endl;
	}

	return 0;
}