#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <set>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <iomanip>
#include <list>
#include <limits>

using namespace std;

typedef vector<pair<char, int>> vp;

bool myDataSortPredicate(const pair<char, int>& lhs, const pair<char, int>& rhs)
{
	return lhs.second < rhs.second;
}

class cQuickSort
{
	int mn;
	vector<pair<char, int>> m_va, m_vb;
	bool isStable;

public:
	cQuickSort(int n, vp &va)
		: mn(n), isStable(true)
	{
		m_va = m_vb = va;
		sort(m_va, 0, m_va.size() - 1);
		stable_sort(m_vb.begin(), m_vb.end(), myDataSortPredicate);
	}

	int partition(vp &, int, int);
	void sort(vp &, int, int);
	void output();
};

int cQuickSort::partition(vp &va, int p, int r)
{
	int x = va[r].second;
	int i = p - 1;
	for (int j = p; j <= r - 1; ++j)
	{
		if (va[j].second <= x)
		{
			++i;
			swap(va[i], va[j]);
		}
	}
	swap(va[i + 1], va[r]);
	return i + 1;
}

void cQuickSort::sort(vp &va, int p, int r)
{
	if (p < r)
	{
		int q = partition(va, p, r);
		sort(va, p, q - 1);
		sort(va, q + 1, r);
	}
}

void cQuickSort::output()
{
	for (int i = 0; i < m_va.size(); ++i)
	{
		if (m_va[i].first != m_vb[i].first)
		{
			isStable = false;
			break;
		}
	}
	cout << ((isStable) ? string("Stable") : string("Not stable")) << endl;
	for (int i = 0; i < mn; ++i)
	{
		cout << m_va[i].first << " " << m_va[i].second << endl;
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	cin.ignore();

	char s;
	int a;
	vp va;

	for (int i = 0; i < n; ++i)
	{
		cin >> s >> a;
		va.push_back(pair<char,int>(s,a));
	}

	cQuickSort cqs(n, va);
	cqs.output();

	return 0;
}