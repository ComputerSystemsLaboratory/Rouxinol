#include<iostream>
#include<vector>
using namespace  std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool flag = false;
		int prev;
		int in[10];
		int used[10];
		for (int j = 0; j < 10; j++)
		{
			cin >> in[j];
		}
		prev = in[0];
		vector<int> B;
		vector<int> C;
		for (int j = 0; j < 10; j++)
		{
			if (prev > in[j])
			{
				C.push_back(in[j]);
				used[j] = false;
				continue;
			}
			else
			{
				prev = in[j];
				B.push_back(in[j]);
				used[j] = true;
			}
		}
		prev = C[0];
		for (int j = 0; j < C.size(); j++)
		{
			if (prev > C[j])
			{
				flag = true;
				break;
			}
			else
			{
				prev = C[j];
			}
		}
		if (flag) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}