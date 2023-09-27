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

int cnt = 0;

void merge(vector<int> &a, int left, int mid, int right)
{
	int n0 = mid - left;
	int n1 = right - mid;

	vector<int> l(n0 + 1);
	vector<int> r(n1 + 1);

	for (int i = 0; i < l.size() - 1; i++)
	{
		l.at(i) = a.at(left + i);
	}

	for (int i = 0; i < r.size() - 1; i++)
	{
		r.at(i) = a.at(mid + i);
	}

	l.at(n0) = INF;
	r.at(n1) = INF;

	int x = 0;
	int y = 0;

	for (int i = left; i < right; i++)
	{
		if (l.at(x) <= r.at(y))
		{
			a.at(i) = l.at(x);
			x++;
		}
		else
		{
			a.at(i) = r.at(y);
			y++;
		}
		cnt++;
	}
}

void merge_sort(vector<int> &a, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		merge_sort(a, left, mid);
		merge_sort(a, mid, right);
		merge(a, left, mid, right);
	}
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

	merge_sort(a, 0, a.size());

	for (int i = 0; i < n; i++)
	{
		cout << (i == 0 ? "" : " ") << a.at(i);
	}

	cout << endl;
	cout << cnt << endl;
}
