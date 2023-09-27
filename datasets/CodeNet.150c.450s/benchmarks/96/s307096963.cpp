#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int b = 0; b < a; b++) {
		string c;
		cin >> c;
		string s = "";
		string p = "";
		for (char d : c) {
			if (d == '0') {
				if (p.length()) {
					if (p[0] == '1') {
						switch (p.length()%5) {
						case 1:s += '.'; break;
						case 2:s += ','; break;
						case 3:s += '!'; break;
						case 4:s += '?'; break;
						case 0:s += ' '; break;
						}
					}
					else if (p[0] == '9') {
						switch (p.length() % 4) {
						case 0:s += 'z'; break;
						case 1:s += 'w'; break;
						case 2:s += 'x'; break;
						case 3:s += 'y'; break;
						}
					}
					else if (p[0] == '7') {
						switch (p.length() % 4) {
						case 0:s += 's'; break;
						case 1:s += 'p'; break;
						case 2:s += 'q'; break;
						case 3:s += 'r'; break;
						}
					}
					else if (p[0] == '8') {
						switch (p.length() % 3) {
						case 0:s += 'v'; break;
						case 1:s += 't'; break;
						case 2:s += 'u'; break;
						}
					}
					else {
						int u=((p[0] - 48) * 3 + p.length()%3 + 90);
						if (p.length() % 3 == 0)u += 3;
						s += u;
					}
				}
				p = "";
			}
			else p += d;
		}
		cout << s << endl;
	}
}