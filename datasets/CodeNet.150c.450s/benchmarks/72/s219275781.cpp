#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char inputStr[1200] = { '\0' };
	cin.getline(inputStr, 1200);
	int length = strlen(inputStr);
	for(int i = 0;i < length;i++)
	{
		if(inputStr[i] >= 'a' && inputStr[i] <= 'z')
		{
			inputStr[i] += 'A' - 'a';
		}
		else if(inputStr[i] >= 'A' && inputStr[i] <= 'Z')
		{
			inputStr[i] += 'a' - 'A';
		}
		cout << inputStr[i];
	}
	cout << endl;
	return 0;
}
