#include<iostream>
using namespace std;
int a[105][105];

int main ()
{
	int n, u, k, temp;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> u >> k;
		u--;
		for(int j = 0; j < k; j++)
		{
			cin >> temp;
			temp--;
			a[u][temp] = 1;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j)  cout << " ";
			cout << a[i][j]; 
		}
		cout << endl;
	}
	return 0;
} 
