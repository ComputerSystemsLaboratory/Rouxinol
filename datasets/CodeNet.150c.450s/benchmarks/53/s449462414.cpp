#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;



int main()
{
	int n;
	cin >> n;
	cout << n << ":";
	int ren = n;
	for (int i = 1; i <= sqrt(n); i++)
	{
		while (ren != 1)
		{
			if (ren % (i + 1) == 0)
			{
				cout << " " <<i + 1;
				ren = ren / (i + 1);
			}
			else break;
		}
	}

	if (ren != 1)
	{
		cout << " " << ren;
	}

	cout << endl;

	return 0;
}