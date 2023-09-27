#include<iostream>
#include<cstdio>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)

int hanako[200],taro[200];

int main()
{
	int n,m;
	while(cin >> n >> m,n)
	{
		int h_sum = 0,t_sum = 0;
		REP(i,n)
		{
			cin >> taro[i];
			t_sum += taro[i];
		}
		REP(i,m)
		{
			cin >> hanako[i];
			h_sum += hanako[i];
		}
		int t = -1,h = -1,sum = 10000;
		REP(i,n)
		{
			REP(j,m)
			{
				int t_tmp,h_tmp;
				t_tmp = t_sum - taro[i] + hanako[j];
				h_tmp = h_sum + taro[i] - hanako[j];
				if(h_tmp == t_tmp)
				{
					if(sum > taro[i] + hanako[j])
					{
						sum = taro[i] + hanako[j];
						t = taro[i];
						h = hanako[j];
					}
				}
				
			}
			
		}
		if(t == -1)
			cout << -1 << endl;
		else
			cout << t << ' ' << h << endl;
		
	}
	
	return 0;
}