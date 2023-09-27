#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string strInput, strTemp;
	int nCount;
	int i, j;
	cin >> strInput;
	cin >> nCount;
	while (nCount--)
	{
		cin >> strTemp >> i >> j;
		if ("reverse" == strTemp)
		{
			reverse(strInput.begin() + i, strInput.begin() + j + 1); //j+1
		}
		else if ("replace" == strTemp)
		{
			cin >> strTemp;
			for (int ii = 0; ii < j - i + 1; ii++)
			{
				strInput[i + ii] = strTemp[ii];
			}
		}
		else
		{
			cout << strInput.substr(i, j - i + 1) << endl;
		}
	}
	//system("pause");
	return 0;
}