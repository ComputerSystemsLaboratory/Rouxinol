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
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define INF 1<<25
#define LIM 1000000

using namespace std;

int bar[30];
int w, n;

int main()
{
	cin >> w >> n;
	
	FOR(i,0,w)
	{
		bar[i] = i+1;
	}
	
	FOR(i,0,n)
	{
		int a,b; char c;
		cin >> a >> c >> b;
		
		swap(bar[a-1], bar[b-1]);
	}
	
	FOR(i,0,w)
	{
		cout<<bar[i]<<endl;
	}
	
	
	return 0;
}