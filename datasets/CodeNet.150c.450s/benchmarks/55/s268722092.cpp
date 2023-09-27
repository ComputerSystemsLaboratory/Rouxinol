#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int num = 0;
	int sum;
	int i;

	while (1)
	{
		sum = 0;
		getline(cin, str);
		if (str[0] == '0')
			break;
		else{
			for (i = 0; i < str.length(); i++)
			{
				num = str[i] - '0';
				sum += num;
			}

			cout << sum << endl;
		}
	}
	return 0;
}