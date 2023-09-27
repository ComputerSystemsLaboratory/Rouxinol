#include <iostream>
#include <algorithm>
#include <vector>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int n,x;
	while(cin >> n >> x)
	{
		if(n == 0 && x == 0) break;

		int count = 0;
		REP(i,1,n-1)
		{
			REP(j,i+1,n)
			{
				REP(k,j+1,n+1)
				{
					if(i+j+k == x) count++;
				}
			}
		}

		cout << count << endl;
	}
	return 0;
}