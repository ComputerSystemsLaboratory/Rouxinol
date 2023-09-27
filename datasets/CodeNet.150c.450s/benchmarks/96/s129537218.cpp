#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string a;
		char c;
		int p = 0;
		int cnt = 0;
		cin >> a;
		for (int i = 0; i < a.size(); ++i) {
			switch(a[i]) {
				case '0':
					if (c != 'P') {
						cout << c;
					}
					p = 0;
					cnt = 0;	
					c = 'P';		
					break;
				case '1':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 5 == 1) {
						c = '.';
					} else if (cnt % 5 == 2) {
						c = ',';
					} else if (cnt % 5 == 3) {
						c = '!';
					} else if (cnt % 5 == 4) {
						c = '?';
					} else if (cnt % 5 == 0) {
						c = ' ';
					}
					break;
				case '2':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 3 == 1) {
						c = 'a';
					} else if (cnt % 3 == 2) {
						c = 'b';
					} else if (cnt % 3 == 0) {
						c = 'c';
					}
					break;
				case '3':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 3 == 1) {
						c = 'd';
					} else if (cnt % 3 == 2) {
						c = 'e';
					} else if (cnt % 3 == 0) {
						c = 'f';
					}
					break;
				case '4':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 3 == 1) {
						c = 'g';
					} else if (cnt % 3 == 2) {
						c = 'h';
					} else if (cnt % 3 == 0) {
						c = 'i';
					}
					break;
				case '5':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 3 == 1) {
						c = 'j';
					} else if (cnt % 3 == 2) {
						c = 'k';
					} else if (cnt % 3 == 0) {
						c = 'l';
					}
					break;
				case '6':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 3 == 1) {
						c = 'm';
					} else if (cnt % 3 == 2) {
						c = 'n';
					} else if (cnt % 3 == 0) {
						c = 'o';
					}
					break;
				case '7':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 4 == 1) {
						c = 'p';
					} else if (cnt % 4 == 2) {
						c = 'q';
					} else if (cnt % 4 == 3) {
						c = 'r';
					} else if (cnt % 4 == 0) {
						c = 's';
					}
					break;
				case '8':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 3 == 1) {
						c = 't';
					} else if (cnt % 3 == 2) {
						c = 'u';
					} else if (cnt % 3 == 0) {
						c = 'v';
					}
					break;
				case '9':
					if (p == 0) {
						p = 1;
					}
					if (p == 1) {
						++cnt;
					}
					if (cnt % 4 == 1) {
						c = 'w';
					} else if (cnt % 4 == 2) {
						c = 'x';
					} else if (cnt % 4 == 3) {
						c = 'y';
					} else if (cnt % 4 == 0) {
						c = 'z';
					}
					break;
			}
		}
		cout << endl;
	}

	return 0;
}
