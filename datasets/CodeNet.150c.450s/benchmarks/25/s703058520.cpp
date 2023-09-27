#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int i;
	int count[26] = {};
	int num = 0;

	while (getline(cin, str)){

		for (i = 0; i < str.length(); i++)
		{
			if (islower(str[i])){
				num = str[i] - 'a';
				count[num]++;
			}
			else if (isupper(str[i])){
				str[i] = tolower(str[i]);
				num = str[i] - 'a';
				count[num]++;
			}

		}
	}

	for (i = 0; i < 26; i++)
	{
		cout << char(i + 'a') << " : " << count[i] << endl;
	}

	return 0;
}