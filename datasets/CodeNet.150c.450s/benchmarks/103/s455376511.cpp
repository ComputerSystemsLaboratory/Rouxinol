#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define RFOR(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))

using namespace std;

typedef pair<int, int> paii;
typedef long long ll;


int main()
{
	int n, s;
	
	while(cin >> n >> s, (n||s))
	{
		int c = 0;
		int lim = 1 << 10;
		
		for(int k = 0; k < lim; k++)
		{
			int sum = 0;
			int sel = 0;
			for(int i = 0; i < 10; i++)
			{
				if( k & (1 << i))
				{
					sum += i;
					sel++;
				}
			}
			
			if(sum == s && sel == n)
				c++;
		}
		
		cout << c << endl;
	}
	
	return 0;
	
}