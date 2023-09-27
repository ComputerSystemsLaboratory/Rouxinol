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

using namespace std;

int main()
{
	int n, q, cnt = 0, input;;
	vector<int> S, C;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		S.push_back(input);
	}

	cin >> q;

	for (int i = 0; i < q; i++)
	{
		cin >> input;
		C.push_back(input);
	}

	sort(S.begin(), S.end());
	S.erase(unique(S.begin(), S.end()), S.end());
	
	for (auto a : C)
	{
		auto itr = find(S.begin(), S.end(), a);
		if (itr != S.end())
			cnt++;
	}

	cout << cnt << endl;
	
}