#include <iostream>
#include <numeric>
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

	while (1)
	{
		int num = 0; cin >> num;
		if (num == 0) { break; }
		vector<int> scr(num, 0);
		rep(i, num){ cin >> scr[i]; }
		int ans = 0;
		ans = accumulate(all(scr), 0) - *max_element(all(scr)) - *min_element(all(scr));
		printf("%d\n", ans / (num - 2));
	}

	return 0;
}