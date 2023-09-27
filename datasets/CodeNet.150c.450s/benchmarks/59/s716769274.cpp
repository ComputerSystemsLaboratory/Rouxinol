#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vec)
{
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		cout << vec[i];
		if (i != vec.size() - 1){
			cout << " ";
		}
	}
	cout << endl;
}

int main()
{
	int n, m;
	int a;
	int i, j;
	vector<int> vec;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> m;
		vec.push_back(m);
	}
	print(vec);

	for (i = 1; i < n; i++)
	{
		a = vec[i];
		for (j = i - 1; j >= 0 && vec[j] > a; j--)
		{
			vec[j + 1] = vec[j];
		}
		vec[j + 1] = a;
		print(vec);
	}

	return 0;
}