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

void merge(vector<pair<string, int>> &a, int left, int mid, int right)
{
	int n0 = mid - left;
	int n1 = right - mid;

	vector<pair<string, int>> l(n0 + 1);
	vector<pair<string, int>> r(n1 + 1);

	for (int i = 0; i < l.size() - 1; i++)
	{
		l.at(i) = a.at(left + i);
	}

	for (int i = 0; i < r.size() - 1; i++)
	{
		r.at(i) = a.at(mid + i);
	}

	l.at(n0).second = INF;
	r.at(n1).second = INF;

	int x = 0;
	int y = 0;

	for (int i = left; i < right; i++)
	{
		if (l.at(x).second <= r.at(y).second)
		{
			a.at(i) = l.at(x);
			x++;
		}
		else
		{
			a.at(i) = r.at(y);
			y++;
		}
	}
}

void merge_sort(vector<pair<string, int>> &a, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		merge_sort(a, left, mid);
		merge_sort(a, mid, right);
		merge(a, left, mid, right);
	}
}

int partition(vector<pair<string, int>> &a, int p, int r)
{
	pair<string, int> x = a.at(r);
	int id = p - 1;

	for (int i = p; i < r; i++)
	{
		if (a.at(i).second <= x.second)
		{
			id++;
			swap(a.at(i), a.at(id));
		}
	}
	swap(a.at(id + 1), a.at(r));

	return id + 1;
}

void quick_sort(vector<pair<string, int>> &a, int p, int r)
{
	if (p < r)
	{
		int q = partition(a, p, r);
		quick_sort(a, p, q - 1);
		quick_sort(a, q + 1, r);
	}
}

int main()
{
	int n;
	cin >> n;

	vector<pair<string, int>> p(n);

	for (int i = 0; i < n; i++)
	{
		string s;
		int id;
		cin >> s >> id;

		p.at(i) = (make_pair(s, id));
	}

	vector<pair<string, int>> a = p;
	vector<pair<string, int>> b = p;

	quick_sort(a, 0, n - 1);
	merge_sort(b, 0, n);

	bool stable = true;
	for (int i = 0; i < n; i++)
	{
		if (a.at(i) != b.at(i))
		{
			stable = false;
			break;
		}
	}

	cout << (stable ? "Stable" : "Not stable") << endl;

	for (int i = 0; i < n; i++)
	{
		cout << a.at(i).first << " " << a.at(i).second << endl;
	}
}
