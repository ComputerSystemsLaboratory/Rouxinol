#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	int maxtime = 0, maxlen = 0;
	string str, maxTimeWord, maxLenWord;
	map<string, int> word;
	while (cin >> str)
	{
		if ((signed)str.length() > maxlen)
			maxlen = str.length(), maxLenWord = str;
		if ((word[str]++) >= maxtime)
			maxtime = word[str], maxTimeWord = str;
		if (cin.get() == '\n') break;
	}
	cout << maxTimeWord << " " << maxLenWord << endl;

	return 0;
}