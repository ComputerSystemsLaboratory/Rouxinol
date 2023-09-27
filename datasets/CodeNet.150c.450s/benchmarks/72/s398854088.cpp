#include <bits/stdc++.h>
using namespace std;


int main()
{
	string strInput;
	getline(cin, strInput);
	for (size_t i = 0; i < strInput.length(); i++)
	{
		if (islower(strInput[i]))
		{
			strInput[i] = toupper(strInput[i]);
		}
		else if (isupper(strInput[i]))
		{
			strInput[i] = tolower(strInput[i]);
		}
	}
	puts(strInput.c_str());

	//system("pause");
	return 0;
}