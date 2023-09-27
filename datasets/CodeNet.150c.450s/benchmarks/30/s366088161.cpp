#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	vector<int> vec;
	int count = 0;
	int minj;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> m;
		vec.push_back(m);
	}

	for (int i = 0; i < n; ++i)
	{
		minj = i;
		for (int j = i; j < n; ++j)
		{
			if (vec[j] < vec[minj]){
				minj = j;
			}
		}
		if (i != minj){
			swap(vec[i], vec[minj]);
			count++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << vec[i];
		if (i != n - 1){
			cout << " ";
		}
		else{
			cout << endl;
		}
	}

	cout << count << endl;

	return 0;
}