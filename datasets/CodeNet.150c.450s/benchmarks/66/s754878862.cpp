
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <functional>

using namespace std;


string u[257];
string t[257];

int main()
{
	int n;
	cin >> n;

	for(int i = 0;i < n;i++)
	{
		cin >> u[i];
	}

	int m;

	cin >> m;

	for(int i = 0;i < m;i++)
	{
		cin >> t[i];
	}

	int p = 1;

	for(int i = 0;i < m;i++)
	{
		bool flag = false;
		for(int j = 0;j < n;j++)
		{
			if(u[j] == t[i])flag = true;
		}

		if(flag)
		{
			if(p)
			{
				cout << "Opened by ";
			}else
			{
				cout << "Closed by ";
			}
			p = 1 - p;
		}else
		{
			cout << "Unknown ";
		}

		cout << t[i] << endl;
	}


	return 0;
}