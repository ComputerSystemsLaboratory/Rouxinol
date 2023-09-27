#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <utility>
#include <numeric>

using namespace std;

const int INF = 1 << 30;
const uint64_t MOD = 1000000000 + 7;

void couting_sort(vector<int> &a, vector<int> &b, int k)
{
	vector<int> c(k + 1);
	
	for (int i = 0; i < a.size() - 1; i++)
	{
		c.at(a.at(i))++;
	}

	for (int i = 1; i <= k; i++)
	{
		c.at(i) += c.at(i - 1);
	}


	for (int i = a.size() - 2; i >= 0; i--)
	{
		b.at(c.at(a.at(i))) = a.at(i);
		c.at(a.at(i))--;	
	}
}

int main()
{
	int n;
	cin >> n;

	vector<int> a(n + 1);
	vector<int> b(n + 1);

	int k = -INF;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a.at(i));

		k = max(k, a.at(i));
	}

	couting_sort(a, b, k);

	for (int i = 1; i <= n; i++)
	{
		cout << (i == 1 ? "" : " ") << b.at(i);
	}


	cout << endl;
}
