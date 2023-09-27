#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <utility>
#include <numeric>

using namespace std;

bool linearSearch(vector<int> &a, int x)
{
	a.at(a.size() - 1) = x;

	int i;
	for (i = 0; a.at(i) != x; i++);

	return i != a.size() - 1;
}

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a.at(i));
	}
	a.push_back(0);



	int q;
	cin >> q;

	int cnt = 0;
	for (int i = 0; i < q; i++)
	{
		int x;
		scanf("%d", &x);

		if (linearSearch(a, x))
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}
