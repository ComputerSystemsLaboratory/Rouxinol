#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		
		for (int s = 0; s < i; s++)
		{
			if (a[s]>=a[i])
			{
				int q = a[s];
				a[s] = a[i];
				for (int k = s; k < i ; k++)
				{
					int w = a[k + 1];
					a[k + 1] = q;
					q = w;
				}
			}
		}
		for (int s = 0; s < n; s++)
		{
			cout << a[s];
			if (s != n - 1)cout << " ";
		}cout << endl;
	}



}