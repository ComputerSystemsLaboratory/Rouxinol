#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char inputStr[1000];
	int number[26] = { 0 };
	while (cin.getline(inputStr, 1000))
	{
		int length = strlen(inputStr);
		if(length < 1)
			break;
		for(int i = 0;i < length;i++)
		{
			if (inputStr[i] >= 'A' && inputStr[i] <= 'Z')
				number[inputStr[i] - 'A']++;
			else if (inputStr[i] >= 'a' && inputStr[i] <= 'z')
				number[inputStr[i] - 'a']++;
		}
	}
	for(int i = 0;i < 26;i++)
	{
		char ch = 'a' + i;
		cout << ch << " : " << number[i] << endl;
	}
	return 0;
}
