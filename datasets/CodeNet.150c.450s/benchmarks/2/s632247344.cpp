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

class cPartition
{
	int mn;
	int mpi;
	vector<int> m_va;

public:
	cPartition(int n, vector<int> &va)
		: mn(n)
	{
		m_va = va;
	}

	void partition(); 
	void output();
};

void cPartition::partition()
{
	int p = 0;
	int r = m_va.size() - 1;
	int x = m_va[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; ++j)
	{
		if (m_va[j] <= x)
		{
			++i;
			swap(m_va[i], m_va[j]);
		}
	}
	swap(m_va[i + 1], m_va[r]);
	mpi = i + 1;
}

void cPartition::output()
{
	for (int i = 0; i < mn - 1; ++i)
	{
		if (i == mpi)
		{
			cout << "[" << m_va[i] << "]" << " ";
		}
		else
		{
			cout << m_va[i] << " ";
		}
	}
	cout << m_va[mn - 1] << endl;
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

	cPartition cp(n, va);
	cp.partition();
	cp.output();

	return 0;
}