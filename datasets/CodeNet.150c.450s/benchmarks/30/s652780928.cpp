#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int a[1000];

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int ans = 0;

		for (int i = 0; i < n; i++)
		{
			int mini = i;
			for (int j = i; j < n; j++)
				if (a[j] < a[mini])
					mini = j;
			swap(a[i], a[mini]);
			if (mini != i) ans++;
		}

		for (int i = 0; i < n; i++)
		{
			if (i) cout << " ";
			cout << a[i];	
		}
		cout << endl;
		cout << ans << endl;
	}
}