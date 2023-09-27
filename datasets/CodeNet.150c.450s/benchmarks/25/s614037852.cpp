#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int getAlphabetIndex(char ch)
{
	if (isalpha(ch))
	{
		if (isupper(ch))
		{
			ch = tolower(ch);
		}
		return ch - 'a';
	}
	else
	{
		return -1;
	}
}

int main()
{
	string sentence(1201, '\0');
	vector<int> num_of_char(26, 0);
	int alpha_i;
	while (getline(cin, sentence), sentence[0] != '\0')
	{
		for (int i = 0; i < sentence.size(); i++)
		{
			alpha_i = getAlphabetIndex(sentence[i]);
			if (alpha_i >= 0)
			{
				num_of_char[alpha_i]++;
			}
		}
	}
	for (int i = 0; i < num_of_char.size(); i++)
	{
		cout << (char)('a' + i) << " : " << num_of_char[i] << endl;
	}
}
