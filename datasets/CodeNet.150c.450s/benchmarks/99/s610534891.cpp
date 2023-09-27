#include <iostream>
#include <string>

using namespace std;

int mcxiToInt(const char c)
{
	switch (c)
	{
	case 'm':
		return 1000;
	case 'c':
		return 100;
	case 'x':
		return 10;
	case 'i':
		return 1;
	default:
		break;
	}

	return 0;
}

int parseInt(string str)
{
	int num{ 0 };
	int digit{ 0 };
	bool prev_is_digit{ false };

	for (int i = 0; i < str.size(); ++i) {
		char c = str[i];

		if (isdigit(c)) {
			digit = static_cast<int>(c - '0');
			prev_is_digit = true;
			continue;
		}

		if (prev_is_digit) {
			num += digit * mcxiToInt(str[i]);
			prev_is_digit = false;
			continue;
		}

		num += mcxiToInt(str[i]);
	}

	return num;
}

string toString(int num)
{
	string ans;

	int m = num / 1000;
	int c = (num - m * 1000) / 100;
	int x = (num - m * 1000 - c * 100) / 10;
	int i = num - m * 1000 - c * 100 - x * 10;

	if (m > 0) {
		if(m > 1) {
			ans += static_cast<char>('0' + m);
		}
		ans += 'm';
	}

	if (c > 0) {
		if(c > 1) {
			ans += static_cast<char>('0' + c);
		}
		ans += 'c';
	}

	if (x > 0) {
		if(x > 1) {
			ans += static_cast<char>('0' + x);
		}
		ans += 'x';
	}

	if (i > 0) {
		if(i > 1) {
			ans += static_cast<char>('0' + i);
		}
		ans += 'i';
	}

	return ans;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		string str1, str2;
		cin >> str1 >> str2;
		int ans = parseInt(str1) + parseInt(str2);
		cout << toString(ans) << endl;
	}
}