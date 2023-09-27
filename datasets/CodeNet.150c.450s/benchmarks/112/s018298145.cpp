#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
	
	while(1)
	{
		int n,m;
		vector<char> vSource,vDest;

		cin >> n;
		if(n == 0)
			break;

		for(int i = 0;i < n;i++)
		{
			char a,b;
			cin >> a >> b;
			vSource.push_back(a);
			vDest.push_back(b);
		}

		cin >> m;
		for(int i = 0;i < m;i++)
		{
			char a;
			cin >> a;

			for(int j = 0;j < vSource.size();j++)
			{
				if(a == vSource[j]){
					a = vDest[j];
					break;
				}
			}
			cout << a;
		}

		cout << endl;
	}
	return 0;
}