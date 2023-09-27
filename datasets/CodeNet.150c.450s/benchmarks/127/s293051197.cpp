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
#define rvs(i) reverse( i.begin(), i.end() )

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int m = 0; cin >> m;
	rep(i, m)
	{
		string tmp; cin >> tmp;
		vector<string> str;
		for(int j = 1; j < (int)tmp.size(); j++)
		{
			string tmp1, tmp2, tmp3, tmp4;
			tmp1 = tmp.substr(0, j);
			tmp2 = tmp.substr(j);
			tmp3 = tmp1; rvs(tmp3);
			tmp4 = tmp2; rvs(tmp4);

			str.push_back(tmp1 + tmp2);
			str.push_back(tmp1 + tmp4);
			str.push_back(tmp3 + tmp2);
			str.push_back(tmp3 + tmp4);
			str.push_back(tmp2 + tmp1);
			str.push_back(tmp2 + tmp3);
			str.push_back(tmp4 + tmp1);
			str.push_back(tmp4 + tmp3);
		}
		sort(all(str));
		str.erase(unique(all(str)), str.end());
		printf("%d\n", (int)str.size());
	}
	return 0;
}