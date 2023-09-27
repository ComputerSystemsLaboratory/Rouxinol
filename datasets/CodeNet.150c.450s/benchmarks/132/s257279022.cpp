#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<functional>
#include<stack>
#include<list>
#include<string>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define PII pair<int,int>
#define PCC pair<char,char>
#define PCI pair<char,int>
#define PIC pair<int,char>
#define MP make_pair
#define DEBUG(x) cout<<#x<<": "<<x<<endl;

int main()
{
	while (1)
	{
		int n, p,ans;
		cin >> n >> p;
		vector<int> S(n, 0);
		if (n == 0)break;
		int c = p;
		for (int i = 0;;)
		{
			if (c > 0)
			{
				S[i]++;
				c--;
			}
			else 
			{
				c = S[i];
				S[i] = 0;
			}
			if (c == 0 && S[i] == p)
			{
				ans = i;
				break;
			}
			if (i == n - 1)i = 0;
			else i++;
		}
		cout << ans << endl;
	}
	return 0;
}