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

void bubbleSort(vector<int> &a)
{
	int cnt = 0;
	bool flg = true;

	for (; flg;)
	{
		flg = false;
		for (int i = a.size() - 1; i > 0; i--)
		{
			if (a.at(i) < a.at(i - 1))
			{
				swap(a.at(i), a.at(i - 1));
				flg = true;
				cnt++;
			}
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

	bubbleSort(a);
}

