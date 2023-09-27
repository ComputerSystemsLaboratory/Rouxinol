#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int using_stl()
{
	int n;
	list<int> L;
	cin >> n;
	char cmd[16];
	int m = n;
	while(m--)
	{ 
		cin >> cmd;
		char c6 = cmd[6];
		int num;
		if (cmd[0]=='i') 
		{
			cin >> num;
			L.push_front(num);
		}
		else if (c6 == 'F')
		{
			L.erase(L.begin());
		}
		else if (c6 == 'L')
		{
			L.erase(--L.end());
		}
		else 
		{
			cin >> num;
			L.erase(find(L.begin(), L.end(), num));
		}
	}
	
	bool first = true;
	for (auto num : L)
	{
		if (first) 
		{
			first = false;
		}
		else
		{
			cout << ' ';
		}
		
		cout << num;
		
	}
	cout << endl;
	
	return 0;
}

int opt()
{
	int n;
	cin >> n;
	int * L = new int[n];
	int nl = 0;
	int bl = 0;
	char cmd[16];
	int m = n;
	while(m--)
	{ 
		cin >> cmd;
		
		if (cmd[0]=='i') 
		{
			cin >> L[nl++];
			continue;
		}
		
		char c6 = cmd[6];
		if (c6 == 'F')
		{
			for (int i=nl-1; i >= 0; i--)
			{
				if (L[i])
				{
					L[i] = 0;
					nl = i;
					break;
				}
			}
		}
		else if (c6 == 'L')
		{
			for (int i=bl; i <n; i++)
			{
				if (L[i])
				{
					L[i] = 0;
					bl = i+1;
					break;
				}
			}
		}
		else 
		{
			int num;
			cin >> num;
			for (int i=nl-1; i >= 0; i--)
			{
				if (L[i] == num)
				{
					L[i] = 0;
					break;
				}
			}
		}
	}
	
	bool first = true;
	
	for (int i=nl-1;i>=bl;i--)
	{
		if (L[i])
		{
			if (first)
			{
				first = false;
			}
			else 
			{
				cout << ' ';
			}
			cout << L[i];
		}
	} 
	
	cout << endl;
	
   return 0;
}


int main()
{
	return opt();
}