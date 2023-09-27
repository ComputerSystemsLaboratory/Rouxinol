#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define REP(i,b,n) for(i=b;i<n;i++)
#define CLR(mat) memset(mat, 0, sizeof(mat))

using namespace std;

int n, m;
char encr[1000] = {0}, decr[1000] = {0};

int main()
{
	while(cin >> n, n)
	{
		FOR(i, 0, n)
		{
			cin >> encr[i] >> decr[i];
		}
		
		cin >> m;
		
		FOR(i, 0, m)
		{
			char c;
			cin >> c;
			
			FOR(i, 0, n)
			{
				if( encr[i] == c )
				{
					c = decr[i];
					goto las;
				}
			}
			
			las:
			cout << c;
		}
		
		cout << endl;
	}
	
	return 0;
}