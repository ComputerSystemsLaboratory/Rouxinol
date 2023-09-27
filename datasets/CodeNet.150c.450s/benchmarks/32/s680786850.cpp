#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#include <tuple>
#include <iomanip>
#include <numeric>
#include <unordered_map>
#include <sstream>
#include<limits.h>
#include<float.h>
#include<list>
#include <array>
#include <complex>
#include<stdio.h>
#include<string.h>
#include <bitset>
#include<random>
using namespace std;

int main()
{
	int n, l, r, curr, pre;
	
	vector<int> ans;
	while (1)
	{
		cin >> n >> l >> r;
		vector<int> m(n);
		if (n == 0 && l == 0 && r == 0) break;
		int max = 0;
		pre = 0;
		for (int i = 0; i < n; ++i)
			cin >> m[i];
		int diff = 0;
		for (int i = 0; i < r - l + 1; ++i)
		{
			if (diff <= m[i + l - 1] - m[i + l])
			{
				diff = m[i + l - 1] - m[i + l];
				max = i + l;
			}
		}
		ans.push_back(max);
	}
	for (const auto& a : ans)
		cout << a << endl;
	return 0;

}
