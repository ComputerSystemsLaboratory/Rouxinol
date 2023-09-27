#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
int main() {
	int sum;
	string s;
	char zero = '0';
	while (1)
	{
		sum = 0;
		getline(cin, s);
		//cin >> s;
		if (s == "0") break;

		for (size_t i = 0; i < s.size(); i++)
		{
			sum += (int)(s[i] - zero);
		}
		cout << sum << endl;
	}
	return 0;
}