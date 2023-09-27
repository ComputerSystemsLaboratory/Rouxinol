#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ans;

	while (true)
	{
		string s;
		cin >> s;

		if (s == "0")
			break;

		int sum = 0;
		for (int i = 0; i < s.size(); ++i)
			sum += (s[i] - '0');

		ans += to_string(sum) + "\n";
	}

	cout << ans;

	return 0;
}