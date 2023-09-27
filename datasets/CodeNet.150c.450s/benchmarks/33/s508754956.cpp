#include<iostream>
#include<algorithm>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)
	
int main()
{
	int x,y,s;
	while(cin >> x >> y >> s,x|y|s)
	{
		int ans = 0;
		for(int i = 1;i < s;i++)
		{
			for(int j = 1;j < s ;j++)
			{
				int a = i*(100 + x)/100;
				int b = j*(100 + x)/100;
				if(a + b != s)continue;
				a = i*(100 + y)/100;
				b = j*(100 + y)/100;
				ans = max(ans , a+b);
			}
		}
		cout << ans << endl;
		
	}
	
	return 0;
	
}