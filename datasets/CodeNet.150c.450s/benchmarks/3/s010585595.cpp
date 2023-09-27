#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	string str;

	string allow;

	string replacechar;

	int S, E;

	string a;

	int q;

	cin >> str;

	cin >> q;

	for (int i = 0; i < q; i++)
	{
		cin >> allow >> S >> E;

		if (allow=="replace")
		{

			cin >> replacechar;

			str.replace(S, E-S+1, replacechar);
		}
		if (allow=="reverse")
		{

			string B = str.substr(S, E - S + 1);

			reverse(B.begin(),B.end());

			str.replace(S, E - S + 1, B);

		}
		if (allow=="print")
		{

			cout << str.substr(S,E-S+1);

			cout << endl;
		}
	}
	
	return 0;
}