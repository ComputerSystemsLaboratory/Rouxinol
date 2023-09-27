#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int selectionSort(vector<int> &a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int minj = i;
		for (int j = i; j < n; j++)
		{
			if (a[j] < a[minj])
			{
				minj = j;
			}
		}
		swap(a[i], a[minj]);
		if (i != minj)
			count++;
	}
	return count;
}

int main()
{
	int N;
	cin >> N;
	cin.ignore();

	string A;
	getline(cin, A);

	vector<int> va;

	istringstream iss(A);
	while (!iss.eof())
	{
		int t;
		iss >> t;
		iss.ignore();
		va.push_back(t);
	}

	int count = selectionSort(va, N);
	ostringstream oss;
	for (int i = 0; i < va.size() - 1; ++i)
	{
		oss << va[i] << " ";
	}
	oss << va[va.size() - 1] << endl;

	cout << oss.str();
	cout << count << endl;

	return 0;
}