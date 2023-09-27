#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string a;
	while (1) {
		cin >> a;
		if (a == "0") break;	// ???????????¶
		else {
			int sum = 0;
			for (size_t i = 0; i < a.size(); i++)
			{
				sum += a[i]-'0';
			}
			cout << sum << endl;
		}
	}
	return 0;
}