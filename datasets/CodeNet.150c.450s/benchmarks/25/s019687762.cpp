#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int a[26] = { 0 };
	char c;

	while (cin >> str) {

		int n = 0;

		for (unsigned int i = 0; i < str.size(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				n = str[i] - 'a';
				a[n]++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z') {
				n = str[i] - 'A';
				a[n]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		c = 'a' + i;
		cout << c << " : " << a[i] << endl;
	}

	return 0;
}