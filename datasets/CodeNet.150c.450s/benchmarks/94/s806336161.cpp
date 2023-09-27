#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	vector<int> vec;
	bool flag = true;
	int count = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		vec.push_back(m);
	}

	while (flag)
	{
		flag = false;
		for (int i = n - 1; i > 0; --i)
		{
			if (vec[i] < vec[i - 1]){
				swap(vec[i], vec[i - 1]);
				flag = true;
				count++;
			}
		}
	}

	for (int i = 0; i < n; i++)
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