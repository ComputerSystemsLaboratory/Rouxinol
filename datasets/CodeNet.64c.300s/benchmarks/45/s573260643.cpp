#include<iostream>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)
	
int main()
{
	int n,m,p;
	while(cin >> n >> m >> p,n)
	{
		int kyo[n],sum = 0;
		REP(i,n)
		{
			cin >> kyo[i];
			sum += kyo[i];
		}
		if(kyo[m-1] == 0)
		{
			cout << 0 << endl;
			continue;
		}
		
		int ans = (100 - p) * sum / kyo[m-1];
		cout << ans << endl;
		
	}
	
	return 0;
}