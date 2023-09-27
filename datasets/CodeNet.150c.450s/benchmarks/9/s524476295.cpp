#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strInput;
	int nCount, nTemp;
	while (cin >> strInput, "-" != strInput)
	{
		cin >> nCount;
		for (int i = 0; i < nCount; i++)
		{
			cin >> nTemp;
			strInput = strInput.substr(nTemp) + strInput.substr(0, nTemp);
		}
		cout << strInput << endl;
	}
	//system("pause");
	return 0;
}