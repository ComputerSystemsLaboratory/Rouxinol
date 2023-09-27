#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	while (1)
	{
		priority_queue<int> GAP;
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
		int index = 0;
		for (int i = n_min; i <= n_max; i++)
		{
			priority_queue<int> tPQ = PQ;
			for (int l = 0; l < i-1; l++)
			{
				tPQ.pop();
			}
			int temp = tPQ.top();
			tPQ.pop();
			int gap = temp - tPQ.top();
			GAP.push(gap);
			if (gap == GAP.top())index = i;
		}
		cout << index << endl;
	}
	return 0;
}