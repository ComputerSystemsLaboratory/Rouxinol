#include <iostream>
#define INF 123456789
using namespace std;

int main() {
	// AOJ0189 Bellman-Ford
	for (;;)
	{
		struct edge {int from,to,cost;};
		int city = 0;//?????¨???????????????????°????(0~7?????§????????????city == 8??§??????)
		int n;
		cin >> n;
		edge es[2*n];
		if (n == 0) break;
		for (int i = 0;i < n;i++)
		{
			int a,b,c;
			cin >> a >> b >> c;
			es[2*i].from = a;
			es[2*i].to = b;
			es[2*i].cost = c;
			es[2*i+1].from = b;
			es[2*i+1].to = a;
			es[2*i+1].cost = c;
 			city = max (max(a,b)+1,city);
		}
		int min = INF;
		int mincity;
		for (int target_city = 0;target_city < city;target_city++)
		{
			//target_city?????????????°???????????¨??????????????????????
			int d[city];
			for (int i = 0;i < city;i++)
			{
				d[i] = INF;
			}
			d[target_city] = 0;
			for (;;)
			{
				bool update = false;
				for (int i = 0;i < 2 * n;i++)
				{
					//???????????????????????????
					if (d[es[i].from] != INF && d[es[i].from] + es[i].cost < d[es[i].to])
					{
						update = true;
						d[es[i].to] = d[es[i].from] + es[i].cost;
					}
				}
				if(!update) break;
			}
			int sum = 0;
			for (int i = 0;i < city;i++)
			{
				sum += d[i];
			}
			if (sum < min)
			{
				min = sum;
				mincity = target_city;
			}
		}
		cout << mincity << " " << min << endl;
	}
	return 0;
}