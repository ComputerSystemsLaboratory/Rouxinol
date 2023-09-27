#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;

	while (true) {
		int x, sum = 0;
		cin >> s;
		if (s[0] == '0') break;

		for (int i = 0; i < s.length(); i++) {
			x = s[i] - '0';
			sum += x;
		}
		cout << sum << "\n";
	}
}