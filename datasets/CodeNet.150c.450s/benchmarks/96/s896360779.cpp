#include <iostream>
using namespace std;

int main()
{
	int N;
	string str,res;
	cin >> N;
	for (int i = 0; i < N; i++) {
		res = "";
		cin >> str;
		char ch = 0;
		int inc = 0;
		for (int j = 0; j < str.length();j++) {
			switch (str[j]) {
			case '0':
				if (ch) {
					if (ch == '.') {
						if (inc % 5 == 0) {
							res += '.';
						}else if (inc % 5 == 1) {
							res += ',';
						}
						else if (inc % 5 == 2) {
							res += '!';
						}
						else if (inc % 5 == 3) {
							res += '?';
						}
						else if (inc % 5 == 4) {
							res += ' ';
						}
					} else if(ch == 'p' || ch == 'w')
						res += (char)(ch + (inc % 4));
					else
						res += (char)(ch + (inc % 3));
				}
				ch = 0;
				inc = 0;
				break;
			case '1':
				if (ch == '.')
					inc++;
				else
					ch = '.';
				break;
			case '2':
				if (ch == 'a')
					inc++;
				else
					ch = 'a';
				break;
			case '3':
				if (ch == 'd')
					inc++;
				else
					ch = 'd';
				break;
			case '4':
				if (ch == 'g')
					inc++;
				else
					ch = 'g';
				break;
			case '5':
				if (ch == 'j')
					inc++;
				else
					ch = 'j';
				break;
			case '6':
				if (ch == 'm')
					inc++;
				else
					ch = 'm';
				break;
			case '7':
				if (ch == 'p')
					inc++;
				else
					ch = 'p';
				break;
			case '8':
				if (ch == 't')
					inc++;
				else
					ch = 't';
				break;
			case '9':
				if (ch == 'w')
					inc++;
				else
					ch = 'w';
				break;
			}
		}
		if(ch) {
			if (ch == '.') {
				if (inc % 5 == 0) {
					res += '.';
				}
				else if (inc % 5 == 1) {
					res += ',';
				}
				else if (inc % 5 == 2) {
					res += '!';
				}
				else if (inc % 5 == 3) {
					res += '?';
				}
				else if (inc % 5 == 4) {
					res += ' ';
				}
			}
			else if (ch == 'p' || ch == 'w')
				res += (char)(ch + (inc % 4));
			else
				res += (char)(ch + (inc % 3));
		}
		cout << res << endl;
	}
	return 0;
}