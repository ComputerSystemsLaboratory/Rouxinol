#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	do {
		
		int n;
		cin >> n;
		int total = 0;
		int temp = 0;

		while (n--) {
			cin >> temp;
			total += temp;
		}
		temp = total % str.size();
		cout << str.substr(temp) << str.substr(0, temp) << endl;
	} while (cin >> str, str != "-");

	return 0;
}