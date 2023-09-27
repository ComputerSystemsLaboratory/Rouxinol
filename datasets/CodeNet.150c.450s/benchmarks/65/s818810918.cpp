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

void bubbleSort(vector<string> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size() - i - 1; j++)
		{
			if (a.at(j).substr(1, 1) > a.at(j + 1).substr(1, 1))
			{
				swap(a.at(j), a.at(j + 1));
			}
		}
	}
}

void SelectionSort(vector<string> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		int mini = i;
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a.at(j).substr(1, 1) < a.at(mini).substr(1, 1))
			{
				mini = j;
			}
		}

		swap(a.at(i), a.at(mini));
	}
}

int main()
{
	int n;

	vector<string> a;

	for (cin >> n; n--;)
	{
		string s;
		cin >> s;

		a.push_back(s);
	}

	vector<string> a0 = a;
	vector<string> a1 = a;

	bubbleSort(a0);
	SelectionSort(a1);

	for (int i = 0; i < a0.size(); i++)
	{
		cout << a0.at(i) << (i == a0.size() - 1 ? "" : " ");
	}
	cout << endl;
	cout << "Stable" << endl;

	bool stable = true;
	for (int i = 0; i < a1.size(); i++)
	{
		cout << a1.at(i) << (i == a1.size() - 1 ? "" : " ");

		if (stable)
		{
			if (a0.at(i) != a1.at(i))
			{
				stable = false;
			}
		}
	}

	cout << endl;
	cout << (stable ? "Stable" : "Not stable") << endl;
}
