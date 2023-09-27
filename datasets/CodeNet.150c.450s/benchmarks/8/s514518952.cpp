#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strT, strH;
	int nCount;
	int nT = 0, nH = 0;
	cin >> nCount;
	while (nCount--)
	{
		cin >> strT >> strH;
		if (strT > strH)
		{
			nT += 3;
		}
		else if (strT == strH)
		{
			nT += 1;
			nH += 1;
		}
		else
		{
			nH += 3;
		}
	}
	cout << nT << " " << nH << endl;

	//system("pause");
	return 0;
}