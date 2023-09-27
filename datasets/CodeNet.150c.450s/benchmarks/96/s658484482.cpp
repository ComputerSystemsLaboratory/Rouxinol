#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;

	for(int j = 0; j < a; j++) {
		string str;
		cin >> str;
		string ret = "";

		int n = 0;
		char c;
		for(int i = 0; i < str.size(); i++) {
			switch(str[i]) {
				case '0':
					if(n)
						ret += c;
					n = 0;
					break;
				case '1':
					switch(n % 5) {
						case 0:
							c = '.';
							break;
						case 1:
							c = ',';
							break;
						case 2:
							c = '!';
							break;
						case 3:
							c = '?';
							break;
						case 4:
							c = ' ';
							break;
					}
					n++;
					break;
				case '2':
					c = 'a' + n % 3;
					n++;
					break;
				case '3':
					c = 'd' + n % 3;
					n++;
					break;
				case '4':
					c = 'g' + n % 3;
					n++;
					break;
				case '5':
					c = 'j' + n % 3;
					n++;
					break;
				case '6':
					c = 'm' + n % 3;
					n++;
					break;
				case '7':
					c = 'p' + n % 4;
					n++;
					break;
				case '8':
					c = 't' + n % 3;
					n++;
					break;
				case '9':
					c = 'w' + n % 4;
					n++;
					break;
			}
		}

		cout << ret << endl;
	}
	return 0;
}