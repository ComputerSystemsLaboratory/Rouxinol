#include<cmath>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cstdio>
#define rep(i,n) for(int i=0;i<n;i++)
#define fori(i,k,n) for(int i=k;i<n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };



int main()
{
	int n = -1;
	cin >> n;
	while (1)
	{

		vector<int> ten;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			ten.push_back(x);
		}
		sort(ten.begin(), ten.end());
		int poi = 0;
		for (int i = 1; i < ten.size() - 1; i++)
		{
			poi += ten[i];
		}
		cout << poi/(n-2) << endl;
		cin >> n;
		if (n==0)break;
	}
	
	




	return 0;
}