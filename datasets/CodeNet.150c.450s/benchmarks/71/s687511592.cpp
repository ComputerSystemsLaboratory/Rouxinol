#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

struct dat
{
	int n;
	int p;

	dat(int n, int p)
	{
		this->n = n;
		this->p = p;
	}
};

int binary_search(int x, vector<dat> &d)
{
	int l = 0;
	int r = d.size();

	int c = 0;

	for (; r > l;)
	{
		int i = (l + r) / 2;
		if (d.at(i).n == x)
		{
			return d.at(i).p;
		}
		else if (d.at(i).n < x)
		{
			l = i + 1;
		}
		else
		{
			r = i;
		}
	}

	return 0;
}

int main()
{
	int n;
	for (; cin >> n;)
	{
		int count = 0;
		vector<int> a;
		
		for (int i = 0; i <= 9; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				a.push_back(i + j);
			}
		}

		sort(a.begin(), a.end());

		int old = a.at(0);
		int p = 1;
		vector<dat> d;
		for (int i = 1; i < a.size(); i++)
		{
			if (old == a.at(i))
			{
				p++;
			}
			else
			{
				d.push_back(dat(old, p));
				p = 1;
			}

			old = a.at(i);
		}

		d.push_back(dat(old, p));

		for (int i = 0; i <= 9; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				count += binary_search(n - i - j, d);
			}
		}
		
		cout << count << endl;
	}
}
