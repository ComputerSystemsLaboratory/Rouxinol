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

const int INF = 2E9;
const uint64_t MOD = 1E9 + 7;

int partition(vector<int> &a)
{
	int x = a.back();
	int id = -1;

	for (int i = 0; i < a.size() - 1; i++)
	{
		if (a.at(i) <= x)
		{
			id++;
			swap(a.at(i), a.at(id));
		}
	}
	swap(a.at(id + 1), a.back());

	return id + 1;
}

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a.at(i);
	}

	int p = partition(a);

	for (int i = 0; i < n; i++)
	{
		cout << (i == 0 ? "" : " ");
		if (i == p)
		{
			cout << "[" << a.at(i) << "]";
		}
		else
		{
			cout << a.at(i);
		}
	}

	cout << endl;
}
