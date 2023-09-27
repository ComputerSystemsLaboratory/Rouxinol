#include <bits/stdc++.h>
using namespace std;

int main()
{
	string strInput;
	string strPat;
	cin >> strInput >> strPat;
	strInput += strInput;
	if (strInput.find(strPat) != string::npos)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}