#include <iostream>
using namespace std;
void reverseSequence()
{
	char s[20];
	cin >> s;
	int i;

	for (i = 0; i < 20; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	for (int j = i - 1; j >= 0; j--)
	{
		cout << s[j];
	}
	cout << endl;
}

int main()
{
	reverseSequence();
	return 0;
}