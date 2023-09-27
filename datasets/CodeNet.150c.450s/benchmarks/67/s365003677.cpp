#include<iostream>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)
	
int sum[2010];

void init()
{
	sum[0] = 0;
	for(int i = 1;i < 2001;i++)
		sum[i] = sum[i-1] + i;
}
	


int main()
{
	init();
	
	int n;
	while(cin >> n,n)
	{
		int ans = 0;
		for(int i = 2;i < n;i++)
		{
			for(int j = 0;j <n;j++)
			{
				if(sum[j+i] - sum[j] == n)ans++;
			}
		}
		
		cout << ans << endl;
		
	}
	
	return 0;
	
}