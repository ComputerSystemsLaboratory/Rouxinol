#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long int lld;

const lld mod = 1e9+7;
const lld INF = 1e9;
//const lld MAXN = 1e9;

int main()
{
	priority_queue<int> s;

	while(1)
	{
		string t;
		cin >> t;
		if (t == "end")
		{
			break;
		}

		if (t == "extract")
		{
			int a = s.top();
			s.pop();
			cout << a << endl;
		}else
		{
			int n;
			cin >> n;
			s.push(n);
		}
	}

	return 0;
}