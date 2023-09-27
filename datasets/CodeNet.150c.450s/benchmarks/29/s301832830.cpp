#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;
int main()
{
	int n;
	cin >> n;
	deque<int> a;
	int x;
	string mission;
	for (int i = 0; i < n; i++)
	{
		cin >> mission;
		if (mission[0]=='i')
		{
			cin >> x;
			a.push_front(x);
		}
		else if (mission[6] == 'F')
		{
			a.pop_front();
		}
		else if (mission[6] =='L' )
		{
			a.pop_back();
		}
		else
		{
			cin >> x;
			for (int s = 0; s < a.size(); s++)
			{
				if (a[s] == x)
				{
					a.erase(a.begin() + s); break;
				}
			}
		}

	}
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i];
		if (i != a.size() - 1)cout << " ";
	}cout << endl;

}