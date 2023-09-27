#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> vec)
{
	for (int i = 1; i < vec.size(); ++i)
	{
		int v = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > v)
		{
			vec[j + 1] = vec[j];
			--j;
		}
		vec[j + 1] = v;
		for (int j = 0; j < vec.size() - 1; ++j)
		{
			cout << vec[j] << " ";
		}
		cout << vec[vec.size() - 1] << endl;
	}
}

void solve()
{
	int N;
	cin >> N;
	vector<int> vec(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> vec[i];
	}
	for (int j = 0; j < vec.size() - 1; ++j)
	{
		cout << vec[j] << " ";
	}
	cout << vec[vec.size() - 1] << endl;
	insertionSort(vec);
}

int main()
{
	solve();
	return(0);
}