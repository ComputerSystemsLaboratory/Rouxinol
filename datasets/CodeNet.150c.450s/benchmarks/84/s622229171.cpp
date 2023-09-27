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

class cDivedeAndConquer
{
	int mn;
	long long m_count;
	vector<long long> m_va;
	numeric_limits<long long> lll;

	void mSort(vector<long long> &va, int left, int right);
	void merge(vector<long long> &va, int left, int mid, int right);

public:
	cDivedeAndConquer(int n, vector<long long>& va)
		:mn(n), m_count(0)
	{
		m_va = va;
		mSort(m_va, 0, m_va.size());
		cout << m_count << endl;
	}
};

void cDivedeAndConquer::mSort(vector<long long> &va, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		mSort(va, left, mid);
		mSort(va, mid, right);
		merge(va, left, mid, right);
	}
}

void cDivedeAndConquer::merge(vector<long long> &va, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	vector<long long> vL(n1 + 1), vR(n2 + 1);

	for (int i = 0; i < n1; ++i)
	{
		vL[i] = va[left + i];
	}
	for (int i = 0; i < n2; ++i)
	{
		vR[i] = va[mid + i];
	}

	vL[n1] = lll.max();
	vR[n2] = lll.max();

	int i = 0;
	int j = 0;

	for (int k = left; k < right; ++k)
	{
		if (vL.at(i) <= vR.at(j))
		{
			va.at(k) = vL.at(i++);
		}
		else
		{
			va.at(k) = vR.at(j++);
			m_count += (right - left) / 2 - i;
		}
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	cin.ignore();

	long long a;
	vector<long long> va;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		va.push_back(a);
	}

	cDivedeAndConquer cdc(n, va);

	return 0;
}