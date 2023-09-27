#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string temp;
	string::size_type index;
	int count = 0;
	int i = 0;

	while (std::cin >> temp) {
		str += temp;
	}
	char c = 'a';
	while (c != 'z' + 1) {

		count = 0;
		for (string::iterator it = str.begin(); it != str.end(); it++) {
			if (c == *it) {
				count++;
			}
			else if (c - 32 == *it) {
				count++;
			}
		}
		cout << c << " : " << count << endl;
		c += 1;
	}

    return 0;
}