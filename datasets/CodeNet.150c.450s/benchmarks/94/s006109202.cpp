#include <iostream>
#include <vector>

using namespace std;
int ans = 0;

void bubbleSort(vector<int>& vec)
{
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = vec.size() - 1; i >= 1; --i)
		{
			if (vec[i] < vec[i - 1])
			{
				int temp = vec[i];
				vec[i] = vec[i - 1];
				vec[i - 1] = temp;
				flag = true;
				++ans;
			}
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
	bubbleSort(vec);
	for (int i = 0; i < vec.size() - 1; ++i)
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