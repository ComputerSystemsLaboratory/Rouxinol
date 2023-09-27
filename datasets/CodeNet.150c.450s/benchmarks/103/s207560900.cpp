#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;


int ans;
int n, s;


/*
iはこれまでに足し合わせた数字の数

*/
void dfs(int i, int kazu, int sum)
{
	if (i == n && sum == s)
	{
		ans++;
		return;
	} else if (i == n) {
		return;
	} else if (kazu == 10) {
		return;
	}
	
	dfs(i, kazu+1, sum);
	dfs(i+1, kazu+1, sum+kazu);
}


int main()
{
	while (1)
	{
		cin >> n >> s;
		if (n == 0 && s == 0) break;
		ans = 0;
		dfs(0, 0, 0);
		cout << ans << endl;
	}
	
	return 0;
}