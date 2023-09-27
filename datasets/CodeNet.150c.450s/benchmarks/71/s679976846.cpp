#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long
#define bl bool
#define nn printf("\n");
#define mod 1000000007

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n = 0;
	while (cin >> n)
	{
		int a = 0, b = 0, c = 0, d = 0;
		int num = 0;

		rep(i, 10)
		{
			rep(j, 10)
			{
				rep(k, 10)
				{
					rep(l, 10)
					{
						if(i + j + k + l == n)
						{
							num += 1;
						}
					}
				}
			}
		}
		printf("%d\n", num);
	}

	return 0;
}