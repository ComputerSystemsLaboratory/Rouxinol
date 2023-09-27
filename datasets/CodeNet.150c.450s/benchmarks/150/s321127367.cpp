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

class cCountingSort
{
	int mn, mk;
	vector<int> m_va, m_vb;
public:
	cCountingSort(int n, vector<int> &va, int k)
		: mn(n), mk(k)
	{
		m_va = va;
		m_vb.resize(mn);
		fill(m_vb.begin(), m_vb.end(), -1);
	}

	void sort();
	void output();
};

void cCountingSort::sort()
{
	vector<int> vc;
	for (int i = 0; i <= mk; ++i)
	{
		vc.push_back(0);
	}

	for (int j = 0; j < mn; ++j)
	{
		vc[m_va[j]]++;
	}

	for (int i = 1; i <= mk; ++i)
	{
		vc[i] = vc[i] + vc[i - 1];
	}

	for (int j = mn - 1; j >= 0; --j)
	{
		m_vb[vc[m_va[j]] - 1] = m_va[j];
		vc[m_va[j]]--;
	}
}

void cCountingSort::output()
{
	for (int i = 0; i < mn - 1; ++i)
	{
		cout << m_vb[i] << " ";
	}
	cout << m_vb[mn - 1] << endl;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	cin.ignore();

	int a;
	vector<int> va;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		va.push_back(a);
	}

	cCountingSort ccs(n, va, *max_element(va.begin(), va.end()));
	ccs.sort();
	ccs.output();

	return 0;
}