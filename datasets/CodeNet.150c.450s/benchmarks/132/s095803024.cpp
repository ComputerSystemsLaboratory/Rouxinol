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
	int n, p;
	cin >> n >> p;
	while (n != 0 || p != 0)
	{
		int ss[100] = {};
		int k = p;
		bool owari = true;
		while (owari)
		{
			for (int i = 0; i < n; i++)
			{
				if (k == 0)
				{
					k += ss[i];
					ss[i] = 0;
				}
				else
				{
					k--;
					ss[i]++;
					if (k == 0)
					{
						bool en = false;
						for (int l = 0; l < n; l++)
						{
							if (l == i)continue;
							if (ss[l] != 0)en = true;
						}
						if (en == false)
						{
							cout << i << endl;
							owari = false;
							break;
						}
					}
				}
			}
		}





		cin >> n >> p;
	}

	return 0;
}