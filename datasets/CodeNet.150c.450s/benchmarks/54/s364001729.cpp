#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strInput, strFind;
	int nSum = 0;
	cin >> strFind;
	for (int i = 0; i != strFind.length(); ++i)
	{
		strFind[i] = tolower(strFind[i]);
	}
	while (cin >> strInput, "END_OF_TEXT" != strInput)
	{
		for (int i = 0; i != strInput.length(); ++i)
		{
			strInput[i] = tolower(strInput[i]);
		}
		if (strFind == strInput)
		{
			++nSum;
		}
	}
	cout << nSum << endl;

	//system("pause");
	return 0;
}