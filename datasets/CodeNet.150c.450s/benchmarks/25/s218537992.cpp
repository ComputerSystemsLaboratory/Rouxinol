#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;
	vector<int> count('z' - 'a' + 1, 0);

	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); ++i)
		{
			if (isupper(s[i]) || islower(s[i]))
				s[i] = tolower(s[i]);
			else
				continue;

			count[s[i] - 'a']++;
		}
	}

	for (char c = 'a'; c <= 'z'; ++c)
		cout << c << " : " << count[c - 'a'] << endl;

	return 0;
}