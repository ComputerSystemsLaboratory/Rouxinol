#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;

int tama[10];

bool dfs(int i, int left, int right)
{
	if (i == 10) return true;
	
	bool ans = false;
	if (left < tama[i])
	{
		ans = dfs(i+1, tama[i], right);
	}
	if (right < tama[i])
	{
		ans = dfs(i+1, left, tama[i]);
	}
	
	return ans;
}

int main()
{
	int N;
	
	cin >> N;
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<10; j++)
		{
			cin >> tama[j];
		}
		cout << (dfs(0, 0, 0) ? "YES" : "NO") << endl;
	}
	
	return 0;
}