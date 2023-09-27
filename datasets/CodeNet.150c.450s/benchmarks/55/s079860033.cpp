#include <iostream>
#include <vector>
#include <string>

using namespace std;

int ctoi(char ch)
{
	if ('0' <= ch && ch <= '9')
	{
		return ch - '0';
	}
	else
	{
		return 0;
	}
}

int main()
{
	string x_s;
	vector<int> sum_digits(1001, 0);
	int digit_i;
	int n = 0;
	while (cin >> x_s, x_s != "0")
	{
		for (int i = 0; i < x_s.length(); i++)
		{
			digit_i = ctoi(x_s[i]);
			sum_digits[n] += digit_i;
		}
		n++;
	}
	n = 0;
	while (sum_digits[n] != 0)
	{
		if (sum_digits[n] < 0)
		{
			sum_digits[n] *= -1;
		}
		cout << sum_digits[n++] << endl;
	}
}
