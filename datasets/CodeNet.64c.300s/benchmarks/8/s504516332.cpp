#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		int x = i;
		if (x % 3 == 0)
		{
			cout << " " << i;
		}
		else 
		{
			while (true)
			{
				if (x % 10 == 3)
				{
					cout << " " << i ;
					break;
				}
				
				x = x / 10;
				if (x == 0)
				{
					break;
				}
				
			}
		}
	}
	cout << endl;
	return 0;
}
