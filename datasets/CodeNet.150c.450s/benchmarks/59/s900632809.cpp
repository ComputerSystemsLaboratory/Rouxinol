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

void insertionSort(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		int v = a.at(i);
		int j;
		for (j = i - 1; j >= 0 && a.at(j) > v; j--)
		{
			a.at(j + 1) = a.at(j);
		}
		a.at(j + 1) = v;

		for (int k = 0; k < a.size(); k++)
		{
			cout << a.at(k) << (k == a.size() - 1 ? "" : " ");
		}

		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;

	vector<int> a;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		a.push_back(x);
	}

	insertionSort(a);
}

