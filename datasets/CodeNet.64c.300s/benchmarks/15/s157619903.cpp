#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

void selectionSort(vector<int> &a)
{
	int cnt = 0;
	for (int i = 0; i < a.size(); i++)
	{
		int mini = i;
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a.at(j) < a.at(mini))
			{
				mini = j;
			}
		}

		if (a.at(i) > a.at(mini))
		{
			swap(a.at(i), a.at(mini));
			cnt++;
		}
	}

	for (int i = 0; i < a.size(); i++)
	{
		cout << a.at(i) << (i == a.size() - 1 ? "" : " ");
	}
	cout << endl;
	cout << cnt << endl;
}

int main()
{
	int n;

	vector<int> a;

	for (cin >> n; n--;)
	{
		int x;
		cin >> x;

		a.push_back(x);
	}

	selectionSort(a);
}
