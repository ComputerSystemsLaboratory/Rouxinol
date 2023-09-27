#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#include <set>
#include <map>
//#include <bits/stdc++.h>

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

	int N, A, B, C, X;
	while (cin >> N >> A >> B >> C >> X)
	{
		if (N == 0) { break; }
		vector<int> dat(N + 2, 0);
		rep(i, N) { cin >> dat[i]; }
		int i = 0, j = 0;
		while (1)
		{	
			if (j > 10000) { printf("-1\n"); break; }
			else if (X == dat[i])
			{
				if (i == N - 1) { printf("%d\n", j); break; }
				i++;
			}
			j++;
			X = (A * X + B) % C;
		}
	}
	return 0;
}