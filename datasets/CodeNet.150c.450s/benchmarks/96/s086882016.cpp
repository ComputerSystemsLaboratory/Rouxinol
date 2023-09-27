#include<iostream>
#include<string>
using namespace std;
string search(int n[]) {
	if (n[0]) {
		if (n[0]%5 == 1) {
			n[0] = 0;
			return ".";
		}
		else if (n[0]%5 == 2) {
			n[0] = 0;
			return ",";
		}
		else if (n[0]%5 == 3) {
			n[0] = 0;
			return "!";
		}
		else if(n[0]%5==4) {
			n[0] = 0;
			return "?";
		}
		else {
			n[0] = 0;
			return " ";
		}
	}
	else if (n[1]) {
		if (n[1] % 3 == 1) {
			n[1] = 0;
			return "a";
		}
		else if (n[1] % 3 == 2) {
			n[1] = 0;
			return "b";
		}
		else {
			n[1] = 0;
			return "c";
		}
	}
	else if (n[2]) {
		if (n[2] % 3 == 1) {
			n[2] = 0;
			return "d";
		}
		else if (n[2] % 3 == 2) {
			n[2] = 0;
			return "e";
		}
		else {
			n[2] = 0;
			return "f";
		}
	}
	else if (n[3]) {
		if (n[3] % 3 == 1) {
			n[3] = 0;
			return "g";
		}
		else if (n[3] % 3 == 2) {
			n[3] = 0;
			return "h";
		}
		else {
			n[3] = 0;
			return "i";
		}
	}
	else if (n[4]) {
		if (n[4] % 3 == 1) {
			n[4] = 0;
			return "j";
		}
		else if (n[4] % 3 == 2) {
			n[4] = 0;
			return "k";
		}
		else {
			n[4] = 0;
			return "l";
		}
	}
	else if (n[5]) {
		if (n[5] % 3 == 1) {
			n[5] = 0;
			return "m";
		}
		else if (n[5] % 3 == 2) {
			n[5] = 0;
			return "n";
		}
		else {
			n[5] = 0;
			return "o";
		}
	}
	else if (n[6]) {
		if (n[6] % 4 == 1) {
			n[6] = 0;
			return "p";
		}
		else if (n[6] % 4 == 2) {
			n[6] = 0;
			return "q";
		}
		else if (n[6] % 4 == 3) {
			n[6] = 0;
			return "r";
		}
		else {
			n[6] = 0;
			return "s";
		}
	}
	else if (n[7]) {
		if (n[7] % 3 == 1) {
			n[7] = 0;
			return "t";
		}
		else if (n[7] % 3 == 2) {
			n[7] = 0;
			return "u";
		}
		else {
			n[7] = 0;
			return "v";
		}
	}
	else if (n[8]) {
		if (n[8] % 4 == 1) {
			n[8] = 0;
			return "w";
		}
		else if (n[8] % 4 == 2) {
			n[8] = 0;
			return "x";
		}
		else if (n[8] % 4 == 3) {
			n[8] = 0;
			return "y";
		}
		else {
			n[8] = 0;
			return "z";
		}
	}
	return "";
}


int main() {
	int i;
	cin >> i;
	string num;
	string s;
	int n[9] = {};
	for (int j = 0; j<i; j++) {
		cin >> num;
		for (int j = 0; j < num.size() ; j++) {
			switch (num[j]) {
			case '1':
				n[0]++;
				break;
			case '2':
				n[1]++;
				break;
			case '3':
				n[2]++;
				break;
			case '4':
				n[3]++;
				break;
			case '5':
				n[4]++;
				break;
			case '6':
				n[5]++;
				break;
			case '7':
				n[6]++;
				break;
			case '8':
				n[7]++;
				break;
			case '9':
				n[8]++;
				break;
			default:
					s += search(n);
			}
		}
		cout << s << endl;
		s = "";
	}
}

