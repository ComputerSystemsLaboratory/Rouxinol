#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cstdio>
#include <map>
#include <queue>
#include <utility>
#define rep(i, n) for(int i = 0; i < n; i++);

using namespace std;

const int INF = 1000000007;
const double PI = acos(-1.0);
typedef long long llong;

const int N = 10000;
int c[1000 + 1][1000 + 1];

int search(string X, string Y)
{
	
	int m = X.size();
	int n = Y.size();
	int maxl = 0;
	X = ' ' + X;
	Y = ' ' + Y;

	for (int i = 1; i <= m; i++) 
		c[i][0] = 0;
	for (int j = 1; j <= n; j++)
		c[0][j] = 0;

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (X[i] == Y[j])
				c[i][j] = c[i - 1][j - 1] + 1;
			else
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);

			maxl = max(maxl, c[i][j]);
		}
	}

	return maxl;
}



int main()
{
	string input1, input2;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input1 >> input2;
		cout << search(input1, input2) << endl;
	}

	return 0;
	

}