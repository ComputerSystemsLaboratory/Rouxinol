#include <iostream>
#include <string>
using namespace std;

// using namespace std;

bool is_same_char(char c1, char c2)
{
	int diff = 'A' - 'a';
	if (c1 == c2 || c1 + diff == c2 || c1 - diff == c2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	string target_str, str;
	int number = 0;
	bool aho = true;
	cin >> target_str;

	while (cin >> str)
	{
		if (str == "END_OF_TEXT")
		{
			break;
		}
		if (str.length() != target_str.length())
		{
			continue;
		}
		else
		{
			bool flag = true;
			for (int i = 0; i < str.length(); ++i)
			{
				bool result = is_same_char(str[i], target_str[i]);
				if (!result)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				++number;
			}
		}
	}
	cout << number << endl;
	return 0;
}

