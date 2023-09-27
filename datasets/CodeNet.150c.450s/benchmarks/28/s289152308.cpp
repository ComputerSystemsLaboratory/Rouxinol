#include <iostream>
#include <stdlib.h> 
using namespace std;
#define MAX 100000
typedef long long llong;

int n,k;
llong W[MAX];

int check(int p)
{
	int i;
	int v = 0;
	for(i = 0; i < k; i++)
	{
		llong sum = 0;
		while(sum + W[v] <= p)
		{
			sum += W[v];
			v++;
			if(v==n) return n;
		}		
	}
	return v;
}

int solve()
{
	llong left = 0;
	llong right = 100000 * 10000; 	//
	llong mid;
	while(right - left > 1)
	{
		mid = (left + right) / 2 ;
		int v = check(mid);
		if(v >= n) right = mid;
		else left = mid;
	}
	return right;
} 



int main() 
{
	cin >> n >> k;
	for( int i =0; i < n; i++) cin >> W[i];
	llong ans = solve();
	cout << ans << endl;
//	system("pause");
	return 0;
}
