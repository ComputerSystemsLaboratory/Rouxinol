#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

void insertionSort(vector<int> A, int n)
{
	for (int i = 0; i < n; i++)
	{
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;

		ostringstream oss;
		for (int k = 0; k < n; k++)
		{
			if (k == n - 1)
			{
				oss << A[k];
			}
			else
			{
				oss << A[k] << " ";
			}
		}
		cout << oss.str() << endl;
	}
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
		va.push_back(t);
	}

	insertionSort(va, N);

	return 0;
}