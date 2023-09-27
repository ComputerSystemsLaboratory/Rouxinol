#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strInput;
	while (cin >> strInput, strInput != "0")
	{
		int nSum = 0;
		for (char c : strInput)	// A new way of for... in c++11
		{
			nSum += c - '0';
		}
		cout << nSum << endl;
	}
	//system("pause");
	return 0;
}