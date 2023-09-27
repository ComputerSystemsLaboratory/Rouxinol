
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main(void)
{
	int n, m;
	for (;;)
	{
		cin >> n >> m;
		if (!n)break;
		vector<int>h, w;
		map<int, int>hei, wid;
		h.push_back(0);
		w.push_back(0);
		for (int i = 0; i < n; ++i)
		{
			int hh;
			cin >> hh;
			h.push_back(hh + h.back());
		}
		for (int i = 0; i < m; ++i)
		{
			int ww;
			cin >> ww;
			w.push_back(ww + w.back());
		}
		for (int r = 1; r <= n; ++r)
		{
			for (int l = 0; l < r; ++l)
			{
				hei[h[r] - h[l]]++;
			}
		}
		for (int r = 1; r <= m; ++r)
		{
			for (int l = 0; l < r; ++l)
			{
				wid[w[r] - w[l]]++;
			}
		}
		long long ans = 0;
		for (auto elm : hei)
		{
			ans += (long long)wid[elm.first] * elm.second;
		}
		cout << ans << endl;
	}
	return 0;
}