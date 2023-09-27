#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <set>

using namespace std;

class cAllocateBaggage
{
	int mn, mk;

	vector<int> vw, vallocatedWeight;
public:
	cAllocateBaggage(int n, int k, vector<int> &v) 
		: mn(n), mk(k), vw(v)
	{
	}

	void alloc2();
};

void cAllocateBaggage::alloc2()
{
	int left = 0;
	int right = 100000 * 10000;

	int p = 0;
	int t_index;
	bool isFound;
	int p_found = 0;

	while (left <= right)
	{
		t_index = 0;
		isFound = false;
		p = left + (right - left) / 2;
		vallocatedWeight.clear();
		vallocatedWeight.resize(mk);

		for (int i = 0; i < vw.size(); ++i)
		{
			if (vallocatedWeight[t_index] + vw[i] > p && mk == t_index + 1)
			{
				break;
			}
			else if (vallocatedWeight[t_index] + vw[i] > p)
			{
				++t_index;
				--i;
			}
			else
			{
				vallocatedWeight[t_index] += vw[i];
				if ((i == (vw.size() - 1)) && t_index <= mk)
				{
					isFound = true;
				}
			}
		}
		if (isFound)
		{
			right = p - 1;
			p_found = p;
		}
		else
		{
			left = p + 1;
		}
	}
	if (!isFound)
		p = p_found;
	cout << p << endl;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	cin.ignore();

	vector<int> vw;

	int w;
	for (int i = 0; i < n; ++i)
	{
		cin >> w;
		vw.push_back(w);
	}

	cAllocateBaggage cab(n, k, vw);
	cab.alloc2();

	return 0;
}