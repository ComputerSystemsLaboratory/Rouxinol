#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int bubbleSort(vector<int> &a, int n)
{
	bool flag = true;
	int count = 0;
	while (flag)
	{

		flag = false;
		for (int j = n - 1; j > 0; --j)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
				flag = true;
				count++;
			}
		}
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
	int count = bubbleSort(va, N);
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