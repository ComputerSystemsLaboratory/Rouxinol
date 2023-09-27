#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void change_fs(int* x, int* y)
{
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
}

int main()
{	
	int n, m;
	while(cin >> n >> m && (n != 0 || m != 0) )
	{
		vector< pair<int, int> > d(n);

		for(int i = 0; i < n; i++)
			cin >> d[i].first >> d[i].second;

		for(int i = 0; i < n; i++)
			change_fs(&d[i].first, &d[i].second);

		sort(d.begin(), d.end());
		reverse(d.begin(), d.end());

		for(int i = 0; i < n; i++)
			change_fs(&d[i].first, &d[i].second);

		int counter = 0;
		int sum = 0;

		for(int i = 0; i < n;i++)
		{
			sum += d[i].first*d[i].second;
		}

		while(m > 0)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < d[i].first; j++)
				{
					counter += d[i].second;
					m--;
					if(m == 0 || counter > sum)
						break;
				}
				if (m == 0 || counter > sum)
					break;
			}
			if (m == 0 || counter > sum)
					break;
		}

		
		if(sum -counter < 0)
			cout << 0 << endl;
		else
			cout << sum - counter << endl;

	}
	return 0;
}
