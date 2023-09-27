#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, bool> T;
	for (int i = 0; i < n; i++)
	{
		char str[10];
		char C[13];
		cin >> str >> C;
		if (str[0] == 'i')
		{
			T[string(C)] = true;
		}
		else
		{
			if (T.find(C) != T.end())
			{
				cout << "yes" << endl;
			}
			else cout << "no" << endl;
		}
	}
	return 0;
}