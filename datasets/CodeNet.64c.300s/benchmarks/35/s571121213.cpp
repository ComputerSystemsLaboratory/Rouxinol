#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int martix[105][105];

int main()
{
	int n, id, d,v;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> id >> d;
		while (d--)
		{
			cin >> v;
			martix[id][v] = 1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j ==1)	cout << martix[i][j];
			else cout << ' ' << martix[i][j];
		}
		putchar('\n');
	}
    return 0;
}


