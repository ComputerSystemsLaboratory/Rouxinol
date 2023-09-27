#include<cmath>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cstdio>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define fori(i,k,n) for(int i=k;i<n;i++)
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
/*
(char)'1' - (int)48 = (int)1; 



*/


int main()
{
	int n;
	cin >> n;
	string ans[10] = { ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
	while (n--)
	{
		string a;
		cin >> a;
		int now = -1;
		for (int i = 0; i < a.size(); i++)
		{
			int k = a[i] - 48;
			if (k == 0)
			{
				if (now != -1)
				{
					cout << ans[(int)(a[i-1]-49)][(now) % (int)ans[a[i-1]-49].size()];
					now = -1;
				}
			}
			else
			{
				now++;
			}


		}
		cout << endl;
	}
	return 0;
}