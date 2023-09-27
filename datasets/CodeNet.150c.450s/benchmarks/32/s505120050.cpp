#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	while (1)
	{
		vector<int> GAP;
		priority_queue<int> PQ;
		int m, n_min, n_max;
		cin >> m >> n_min >> n_max;
		if (m == 0)break;
		for (int i = 0; i < m; i++)
		{
			int k;
			cin >> k;
			PQ.push(k);
		}
		for (int i = n_min; i <= n_max; i++)
		{
			priority_queue<int> tPQ = PQ;
			for (int l = 0; l < i-1; l++)
			{
				tPQ.pop();
			}
			int temp = tPQ.top();
			tPQ.pop();
			GAP.push_back(temp - tPQ.top());
		}
		int max_gap = 0;
		int index = 0;
		int max_index;
		for (auto itr = GAP.begin(); itr != GAP.end(); itr++)
		{
			if (max_gap <= *itr)
			{
				max_gap = *itr;
				max_index = index;
			}
			index++;
		}
		cout <<n_min+max_index << endl;
	}
	return 0;
}