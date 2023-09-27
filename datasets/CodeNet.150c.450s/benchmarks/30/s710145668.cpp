#include <iostream>
#include <vector>

using namespace std;
int ans = 0;

void selectionSort(vector<int>& vec)
{
	for (int i = 0; i < vec.size() - 1; ++i)
	{
		int minj = i;
		bool flag = false;
		for (int j = i; j < vec.size(); ++j)
		{
			if (vec[j] < vec[minj])
			{
				minj = j;
				flag = true;
			}
		}
		if (flag)
		{
			int temp = vec[i];
			vec[i] = vec[minj];
			vec[minj] = temp;
			++ans;
		}
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}
	selectionSort(vec);
	for (int i = 0; i < n - 1; ++i)
	{
		cout << vec[i] << " ";
	}
	cout << vec[vec.size() - 1] << endl;
	cout << ans << endl;
}

int main()
{
	solve();
	return(0);
}